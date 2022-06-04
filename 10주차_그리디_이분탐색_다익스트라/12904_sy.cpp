#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
string s, t;
int n;
int ans = 0;
//dfs - 시간초과
string add(string t) {
	return t.substr(0, t.length() - 1);
}
string rev(string t) {
	t = t.substr(0, t.length() - 1);
	reverse(t.begin(), t.end());
	return t;
}
int main() {
	cin >> s;
	cin >> t;
	n = t.length();

	int k = t.length() - s.length();

    //뒤에서부터 A,B인지
	for (int i = 0; i<k; i++){
		if (t[n - 1 - i] == 'A') {
			t = add(t);
		}
		else {
			t = rev(t);
		}
	}
	if (t == s)
		ans = 1;

	cout << ans;
}

//ABBA
//ABB
//BA
//B