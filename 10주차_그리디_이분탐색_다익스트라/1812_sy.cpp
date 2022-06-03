#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include<stack>
#include <deque>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	deque<char> st;

	ios_base::sync_with_stdio(false);
	cout.tie(NULL);

	for (unsigned int i = 0; i < n; i++) {
		while (!st.empty() && st.back() < s[i] && k != 0) {
			st.pop_back();
			k--;
		}
		st.push_back(s[i]);
	}
	// k개를 모두 지우지 못했을 수도 있음!!
	for (unsigned int i = 0; i < st.size() - k; i++) {
		cout << st[i];
	}
}
