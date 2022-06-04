#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int k, n;
vector<int> v;
int ans;
bool f(unsigned int mid) {
	ans = 0;
	for (unsigned int i = 0; i < k; i++) {
		unsigned int count = v[i] / mid;
		ans += count;
	}
	if (ans >= n)
		return true;
	return false;
}
int main() {
	cin >> k;
	cin >> n;
	unsigned int m = 0;
	for (unsigned int i = 0; i < k; i++)
	{
		unsigned int s;
		cin >> s;
		v.push_back(s);
		if (m < s)m = s;
	}

	unsigned int high = m;
	unsigned int low = 1;
	while (low<=high) {
		unsigned int mid = (high + low) / 2;
		if (f(mid))
			low = mid +1;
		else
			high = mid - 1;
	}
	cout << high;

}