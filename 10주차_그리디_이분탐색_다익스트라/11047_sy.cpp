#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long n, k;
int main() {
	cin >> n >> k;
	vector<long long> v;
	int idx = 0;
	for (int i = 0; i < n; i++) {
		long long num;
		cin >> num;
		if (num <= k)idx = i;
		v.push_back(num);
	}
	long long ans = 0;

	while (idx>=0 && k>0) {
		long long c = k / v[idx];
		k = k - (v[idx] * c);
		ans += c;
		idx--;
	}
	cout << ans;

}