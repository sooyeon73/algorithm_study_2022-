#include <string>
#include <queue>
#include <iostream>
using namespace std;
int n, m;
int arr[1000][1000];
int visit[1000][1000];
queue<pair<int, int>> q;
int di[4] = { -1,1,0,0 };
int dj[4] = { 0,0,-1,1 };

void bfs() {
	while (!q.empty()) {
		int i_ = q.front().first;
		int j_ = q.front().second;
		q.pop();

		for (int k = 0; k < 4; k++) {
			int i__ = i_ + di[k];
			int j__ = j_ + dj[k];
			if (i__ < 0 || j__ < 0 || i__ >= n || j__ >= m)
				continue;
			if (arr[i__][j__]==0) { // 0 이고, 접근한 적 x 
				arr[i__][j__] += arr[i_][j_] + 1; // 누적 값 count
				q.push(make_pair(i__, j__));
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1)
				q.push(make_pair(i, j)); // bfs로 탐색할 좌표 추가!!!! //
		}
	}
	bfs();
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) // 0 인게 하나라도 남아 있으면
			{
				cout << -1;
				return 0;
			}
			ans = max(ans, arr[i][j]);
		}
	}
	cout << ans-1;
}
