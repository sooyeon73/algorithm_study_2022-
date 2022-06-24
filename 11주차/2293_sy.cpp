#include<vector>
#include<iostream>
using namespace std;
int d[10001]; // 전역 선언 : 0으로 초기화 됨
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		int nn;
		cin >> nn;
		num[i] = nn;
	}

	d[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = num[i]; j <= k; j++)
		{
			d[j] += d[j - num[i] ];
		}
	}
	cout << d[k];




}