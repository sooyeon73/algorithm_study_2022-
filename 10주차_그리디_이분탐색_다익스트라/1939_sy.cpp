#include <iostream>
#include <vector>
#include<cstring>
#include <queue>
using namespace std;
int n, m;
int s, e;// 시작 끝 점
vector<pair<int, int>> v[1000000]; //a->b c

bool bfs(int mid) {
	queue<int> q;
	q.push(s);
    //전역 변수가 아니면 false로 초기화가 필요함
    //전역 변수면 알아서 0으로 초기화가 된다
    bool visit[100001] = {false,};
	visit[s] = true;
	while (!q.empty())
	{
		int pos = q.front();
		q.pop();
		if (pos == e) return true;
		for (int i = 0; i < v[pos].size(); i++) {
			if (visit[v[pos][i].first] == false && v[pos][i].second >= mid) {
				visit[v[pos][i].first] = true;
				q.push(v[pos][i].first);
			}
		}
	}
	return false;
}
int main() {
	cin >> n >> m;
	int max = 0;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b,c });
		v[b].push_back({ a,c });
		if (c > max) max = c;
	}
	cin >> s >> e;

	int high = max;
	int low = 0;
	//nt ans=0;
	while (low <= high) {
		int mid = (high + low) / 2;
		if (bfs(mid)) { low = mid + 1;}
		else high = mid - 1;
	}
	cout << high;
}
