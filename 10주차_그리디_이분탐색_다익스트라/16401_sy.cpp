#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int m, n;
int v[1000000];

bool pos(int len) {
	int count = 0;
	for (int i = 0; i <n; i++) {
		int temp = v[i] / len;
		if (temp == 0) return false;
		count += temp;
		if (count >= m)
			return true;
	}
	return false;
}
int main(){
	cin >> m >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v[i]=num;
	}
	sort(v, v+n, greater<int>());
	int ans = 0;
	int high = v[0];
	int low = 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (pos(mid)) {
			ans = mid;
			low = mid + 1;
		}
		else
			high = mid - 1;
	}


	cout << ans;

}