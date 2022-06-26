#include <iostream>
#include <vector>
#include <deque>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string s;
		string input;
		deque<int> v;
		cin >> s;
		cin >> n;
		cin >> input;
		bool iferr = false;
		bool ifrev = false; /* R 상태 관리  */

		// 구현 파트
		string cur = "";
		for (int p = 0; p < input.length(); p++) {
			if (isdigit(input[p]))
				cur += input[p]; // 해당 숫자 append 해서 저장
			else
			{
				if (!cur.empty()) {
					v.push_back(stoi(cur)); // 저장된 숫자 v에 추가
					cur = "";
				}
			}
		}

		for (int p = 0; p < s.length(); p++) {
			if (s[p] == 'R')
				ifrev = !ifrev;
			else if (s[p] == 'D')
			{
				if (v.empty())
				{
					iferr = true; break;
				}
				if (!ifrev)
					v.pop_front();
				else
					v.pop_back();
			}
		}
		if (iferr)
			cout << "error" << "\n";
		else {
			if (v.empty()) {
				cout << "[]" << "\n";
			}
			else {
				cout << "[";
				if (!ifrev) {
					for (int i = 0; i < v.size() - 1; i++)
						cout << v[i] << ",";
					cout << v[v.size() - 1] << "]\n";
				}
				else {
					for (int i = v.size() - 1; i > 0; i--)
						cout << v[i] << ",";
					cout << v[0] << "]\n";

				}
			}
		}
	}

}