#include <iostream>
#include <vector>
#include<cstring>
#include <queue>
using namespace std;
int n, m;
int s, e;// 시작 끝 점
bool visit[100001];
vector<pair<int, int>> v[100001]; //a->b c
bool bfs(int mid) {
	queue<int> q;
	q.push(s);
	int visit[100001];
	visit[s] = true;
	while (!q.empty())
	{
		int pos = q.front();
		q.pop();
		if (pos = e) return true;
		for (int i = 0; i < v[pos].size(); i++) {
			if (!visit[v[pos][i].first] && v[pos][i].second >= mid) {
				visit[v[pos][i].first] = true;
				q.push(v[pos][i].first);
			}
		}
	}
	return false;
}
int main() {
	cin >> n >> m;
	int m = 0;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b,c });
		v[b].push_back({ a,c });
		if (c > m) m = c;
	}
	cin >> s >> e;

	int high =m;
	int low = 0;
	int ans;
	while (low <= high) {
		memset(visit, false, sizeof(visit));
		int mid = (high + low) / 2;
		if (bfs(mid)) low = mid + 1;
		else high = mid - 1;
	}
	cout << high;
}