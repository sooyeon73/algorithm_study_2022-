#include <cstring>
#include <queue>
#include <iostream>
using namespace std;
int n;
queue<pair<int, int>> q;
int di[8] = { -1,-2,-2,-1,1,2,2,1 };
int dj[8] = { -2,-1,1,2,-2,-1,1,2 };
int arr[300][300];
void bfs(int i_final, int j_final) {
	while (!q.empty()) {
		int i_ = q.front().first;
		int j_ = q.front().second;
		if (i_ == i_final && j_== j_final) //도달하면
			return;
		q.pop();
		for (int k = 0; k < 8; k++) {
			int i__ = i_ + di[k];
			int j__ = j_ + dj[k];
			if (i__ < 0 || j__ < 0 || i__ >= n || j__ >= n)
				continue;
			if (arr[i__][j__]==0) {
				arr[i__][j__] += arr[i_][j_] + 1;	
				q.push(make_pair(i__, j__));
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for (int p = 0;p < t; p++) {
		memset(arr, 0, sizeof(arr));
		q = queue<pair<int, int>>(); //큐도 초기화!!!
		cin >> n;
		int i, j;
		int i_final, j_final;
		cin >> i >> j >> i_final >> j_final;
		q.push(make_pair(i, j)); //시작점
		arr[i][j] = 1; // 방문

		bfs(i_final, j_final);
		cout << arr[i_final][j_final]-1 << "\n";
	}
}
