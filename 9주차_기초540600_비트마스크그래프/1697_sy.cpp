#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int visit[100001];
int main() {
	int n, k;
	cin >> n >> k;
	
	//위치 , 시간 함께 저장!!!
	queue<pair<int,int>> q;
	q.push({ n,0 });
	int ans ;

	while (!q.empty()) {
		int cur = q.front().first;
		int time = q.front().second;
		visit[cur] = 1;

		q.pop();

		if (cur == k) {
			ans = time;
			break;
		}

		int next = cur - 1;
		if (next >= 0 && !visit[next]) {
			q.push({ next, time + 1 });
	
		}

		next = cur + 1;
		if (next<=100000 && !visit[next]) {
			q.push({ next,time + 1 });
		}
        
		next = cur * 2;
		if (next<=100000 && !visit[next]) {
			q.push({ next, time + 1 });

		}

	}

	cout << ans;
}

/*2
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dist[100002];
int n,k;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  fill(dist, dist+100001,-1);
  dist[n] = 0;
  queue<int> Q;
  Q.push(n);
  while(dist[k] == -1){
    int cur = Q.front(); Q.pop();
    for(int nxt : {cur-1, cur+1, 2*cur}){
      if(nxt < 0 || nxt > 100000) continue;
      if(dist[nxt] != -1) continue;
      dist[nxt] = dist[cur]+1;
      Q.push(nxt);
    }        
  }
  cout << dist[k];
}
*/