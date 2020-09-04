#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<queue>
#include<set>
#define N 200010

using namespace std;

//int knapsack(int items, int* price, int* weight, int MW) {
//	int** mat = new int*[items + 1];
//	for (int i = 0; i < items + 1; ++i)
//		mat[i] = new int[MW + 1];
//
//
//	for (int i = 0; i < items + 1; ++i) {
//		for (int j = 0; j < MW + 1; ++j) {
//			if (i == 0 || j == 0)
//				mat[i][j] = 0;
//			else if (weight[i - 1] <= j)
//				mat[i][j] = max(mat[i - 1][j], price[i - 1] + mat[i - 1][j - weight[i - 1]]);
//			else
//				mat[i][j] = mat[i - 1][j];
//		}
//	}
//
//	int result = mat[items][MW];
//
//
//	for (int i = 0; i<items; i++) {
//		delete[] mat[i];
//	}
//	delete[] mat;
//	return result;
//}

int fa[N], id[N / 2], Size[N], val[N];
int n, m, op, p, q;

void Init() {
	for (int i = 0; i < N; ++i) {
		fa[i] = val[i] = i;
		Size[i] = 1;
	}

	for (int i = 1; i <= n; ++i) {
		id[i] = i;
	}
}

int Find(int x) {
	return x == fa[x] ? x : fa[x] = Find(fa[x]);
}



//long long power(long long x, int y) {
//	long long result = 1;
//	if (y == 0) return result;
//	for (int i = 0; i < y; i++) {
//		result *= x;
//	}
//	return result;
//}
//long long arr[1000000];

//int descending(int x) {
//	if (x == 0) return x;
//	vector<int> result;
//	int number = x;
//	while (number != 0) {
//		result.push_back(number % 10);
//		number /= 10;
//	}
//	sort(result.begin(), result.end(), greater<int>());
//	
//	for (auto elem : result) {
//		number *= 10;
//		number += elem;
//	}
//	return number;
//}
//
//int ascending(int x) {
//	if (x == 0) return x;
//	vector<int> result;
//	int number = x;
//	while (number != 0) {
//		result.push_back(number % 10);
//		number /= 10;
//	}
//	sort(result.begin(), result.end());
//
//	for (auto elem : result) {
//		number *= 10;
//		number += elem;
//	}
//	return number;
//}

//typedef pair<int, int> PII;
//PII arr[10001];
//priority_queue<int, vector<int>, greater<int>> p;
//
//
//int pri[1001];
//int s, t;
//
//vector<int> getstringtoint(string s) {
//	vector<int> res;
//	stringstream ss(s);
//	int temp;
//	while (ss >> temp) {
//		res.push_back(temp);
//	}
//	return res;
//}
//
//
//
//int GCD(int x, int y) {
//	return (y == 0) ? x : GCD(y, x % y);
//}
//
//int G_function(int N) {
//	int G = 0;
//	for (int i = 1; i < N; ++i) {
//		for (int j = i + 1; j <= N; j++) {
//			G += GCD(i, j);
//		}
//	}
//	return G;
//}
//
//bool coolword(string s) {
//	map<char, int> res;
//	for (int i = 0; i < s.size(); ++i) {
//		auto Find = res.find(s[i]);
//		if (Find == res.end()) res.insert(pair<char, int>(s[i], 1));
//		else				   Find->second++;
//	}
//	if (res.size() == 1) return false;
//	vector<int> temp;
//	for (auto elem : res)
//		temp.push_back(elem.second);
//	sort(temp.begin(), temp.end());
//	for (int i = 0; i < temp.size() - 1; ++i) {
//		if ((temp[i] - temp[i + 1]) == 0) return false;
//	}
//	return true;
//}

//char grid[51][51];
//char word[51];
//int Case, m, n, k;
//
//bool Locate(int i, int j) {
//	int x;
//	for (x = 1; i - x >= 0 && word[x] == grid[i - x][j];) { x++; if (word[x] == '\0') return 1; }
//	for (x = 1; i + x < m  && word[x] == grid[i + x][j];) { x++; if (word[x] == '\0') return 1; }
//	for (x = 1; j - x >= 0 && word[x] == grid[i][j - x];) { x++; if (word[x] == '\0') return 1; }
//	for (x = 1; j + x < n  && word[x] == grid[i][j + x];) { x++; if (word[x] == '\0') return 1; }
//	for (x = 1; i - x >= 0 && j - x >= 0 && word[x] == grid[i - x][j - x];) { x++; if (word[x] == '\0') return 1; }
//	for (x = 1; i + x < m  && j - x >= 0 && word[x] == grid[i + x][j - x];) { x++; if (word[x] == '\0') return 1; }
//	for (x = 1; i - x >= 0 && j + x < n  && word[x] == grid[i - x][j + x];) { x++; if (word[x] == '\0') return 1; }
//	for (x = 1; i + x < m  && j + x < n  && word[x] == grid[i + x][j + x];) { x++; if (word[x] == '\0') return 1; }
//	return 0;
//}


//void upper_to_lower(char a[])
//{
//	for (int i = 0; a[i]; i++) {
//		if (a[i] >= 'A' && a[i] <= 'Z')
//			a[i] += 32;
//	}
//}
//
//bool stringmatching(const string& haystack, const string& needle) {
//	int i, j;
//	for (i = 0, j = 0; i < haystack.size() && j < needle.size();) {
//		if (haystack[i] == needle[j]) {
//			i++;
//			j++;
//		}
//		else {
//			i++;
//		}
//	}
//	if (j == needle.size())   return true;
//	if (i == haystack.size()) return false;
//}
//
//string arr[26 * 26 * 26];


int main() {
	
	fstream input, output, ans;
	input.open("input.txt");
	ans.open("ans.txt", ios::in);
	output.open("output.txt", ios::in | ios::out | ios::trunc);
	
	/*int cases;
	while (true) {
		input >> cases;
		if (input.eof()) break;
		for (int i = 0; i < cases; ++i) {
			input >> arr[i].second >> arr[i].first;
		}
		sort(arr, arr + cases);
		for (int i = 0; i < cases; ++i) {
			if (arr[i].first > p.size()) p.push(arr[i].second);
			else if (arr[i].first == p.size() && arr[i].second > p.top()) {
				p.pop();
				p.push(arr[i].second);
			}
		}
		int res = 0;
		while (!p.empty()) {
			res += p.top();
			p.pop();
		}
		output << res << endl;
	}*/
	
	/*pri[2] = 1;
	for (int i = 3; i <= 1000; i += 2) {
		bool flag = false;
		for (int j = 3; j <= i / 2; j += 2) {
			(i%j == 0) ? flag = true : flag = flag;
		}
		if (!flag) pri[i] = 1;
	}*/

	//int cases = 1;
	//while (input >> s >> t) {
	//	if (s == 0 && t == 0) break;
	//	bool book[10001];
	//	memset(book, 0, sizeof(book));
	//	queue<int> q1, q2;
	//	bool done = false;
	//	int ss, tt;
	//	q1.push(s);
	//	q2.push(0);
	//	if (s == t) {
	//		done = true;
	//		tt = 0;
	//	}
	//	else {
	//		while (!q1.empty()) {
	//			ss = q1.front();
	//			tt = q2.front();
	//			q1.pop();
	//			q2.pop();
	//			if (pri[ss] == 0) {
	//				for (int i = 2; i <= ss / 2; i++) {
	//					if (pri[i] == 1) {
	//						if (ss % i == 0) {
	//							if ((ss + i) <= t && book[ss + i] == 0) {
	//								book[ss + i] = 1;
	//								q1.push(ss + i);
	//								q2.push(tt + 1);
	//								if ((ss + i) == t) {
	//									done = true;
	//									tt++;
	//									break;
	//								}
	//							}
	//						}
	//					}
	//				}
	//			}
	//			if (done) break;
	//		}
	//	}
	//	if(done) output << "Case " << cases++ << ": " << tt << endl;
	//	else     output << "Case " << cases++ << ": " << -1 << endl;
	//}

	
	/*string s;
	vector<int> time;
	int hour_start, min_start, hour_end, min_end;
	while (true) {
		int res = 0;
		getline(input, s);
		time = getstringtoint(s);
		for (auto elem : time) {
			res += elem;
		}
		if (res == 0) break;
		
		int start = 60 * time[0] + time[1];
		int end = 60 * time[2] + time[3];
		if (end > start) output << end - start << endl;
		else			 output << end + 1440 - start << endl;
	}*/

	/*int cases = 1;
	int data;
	string s;
	while (!input.eof()) {
		input >> data;
		int cool = 0;
		for (int i = 0; i < data; ++i) {
			input >> s;
			if (coolword(s)) cool++;
		}
		output << "Case " << cases++ << ": " << cool << endl;
	}*/


	/*input >> Case;
	while (Case--) {
		input >> m >> n;
		for (int i = 0; i < m; i++) {
			input >> grid[i];
			upper_to_lower(grid[i]);
		}

		input >> k;
		while (k--) {
			input >> word;
			upper_to_lower(word);
			

			int i, j, ok = 0;
			for (i = 0; i < m && !ok; i++){
				for (j = 0; j < n && !ok; j++) {
					if (grid[i][j] == word[0] && Locate(i, j)) {
						output << ++i << ' ' << ++j << endl;
						ok = 1;
					}
				}
			}
		}
		if (Case) output << endl;
	}*/
	
	/*int index = 0;
	for (int i = 0; i < 26; ++i) {
		for (int j = 0; j < 26; ++j) {
			for (int k = 0; k < 26; ++k) {
				arr[index] += ('A' + i);
				arr[index] += ('A' + j);
				arr[index++] += ('A' + k);
			}
		}
	}

	
	string s;
	int Case;
	input >> Case;
	while (input >> s){
		Case--;
		if (s.size() < 3)  { output << 0 << endl; continue; }
		if (s.size() == 3) { output << 1 << endl; continue; }
		int ans = 0;
		for (int i = 0; i < 26 * 26 * 26; ++i) {
			if (stringmatching(s, arr[i])) ans++;
		}
		output << ans << endl;
		if (!Case) break;
	}*/
	
	

	while (!input.eof())
	{
		input >> n >> m;
		Init();
		while (m--)
		{
			input >> op;
			if (op == 3)
			{
				input >> p;
				int fa = Find(id[p]);
				output << Size[fa] << ' ' << val[fa] << endl;
			}
			else if (op == 1) {
				input >> p >> q;
				int fp = Find(id[p]), fq = Find(id[q]);
				if (fp != fq)
				{
					fa[fp] = fq;
					Size[fq] += Size[fp];
					val[fq] += val[fp];
				}
			}
			else
			{
				input >> p >> q;
				int fp = Find(id[p]), fq = Find(id[q]);
				if (fp != fq)
				{
					Size[fp]--;
					val[fp] -= p;
					id[p] = (++n); //create virtual node to join q, cant directly change p's father node cause it might be the others father node
					fa[id[p]] = fq;//dont need to maintain the original node 
					Size[fq]++;
					val[fq] += p;			
				}
			}
		}
		}
	

	
	ifstream comp_1, comp_2;
	comp_1.open("ans.txt");
	comp_2.open("output.txt");

	while (true) {
		string s1, s2;
		comp_1 >> s1;
		comp_2 >> s2;
		if (comp_1.eof() && comp_2.eof()) {
			cout << "SUCCESSED!!" << endl;
			break;
		}
		if (s1 != s2) {
			cout << "FAILED" << endl;
			break;
		}
	}
	

	input.close();
	output.close();
	ans.close();
	comp_1.close();
	comp_2.close();
	
	system("pause");
	return 0;
}