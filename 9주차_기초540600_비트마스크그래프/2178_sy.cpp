#include <string>
#include <queue>
#include <iostream>
using namespace std;
int n, m;
int arr[101][101];
int visit[101][101];
int vi[4] = { -1,1,0,0 };
int vj[4] = { 0,0,-1,1 };
int ans = 1;

//최단 경로 탐색  - bfs 효율적
void bfs(int i, int j) {
	visit[i][j] = 1;
	queue<pair<int, int>> q;
	q.push(make_pair(i, j)); // make_pair 대신 {i ,j}로 사용 가능 //!!

	while (!q.empty()) {
		int i = q.front().first;
		int j = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int cur_i = i + vi[k];
			int cur_j = j + vj[k];
			if (cur_i < 0 || cur_j < 0 || cur_i >= n || cur_j >= m)
				continue;
			if (arr[cur_i][cur_j] == 1 && visit[cur_i][cur_j] ==0) {
			//	ans++;
				visit[cur_i][cur_j] = visit[i][j] + 1;
				q.push(make_pair(cur_i, cur_j));
			}
		}
	}
}
int main() {

	cin >> n >> m;
	string line;
	for (int i = 0; i < n; i++) {
		cin >> line;
		for (int j = 0; j < m; j++) {
			arr[i][j] = int(line[j] - '0');
		}
	}

	bfs(0, 0);
	cout << visit[n-1][m-1];

}
