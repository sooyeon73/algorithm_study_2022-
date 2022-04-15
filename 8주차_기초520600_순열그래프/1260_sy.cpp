#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int n, m;
void dfs( int pos, vector<vector<int>>& edge, vector<bool>& visit) {
    //
    visit[pos] = true;
    cout << pos << " ";
    //

    for(int i=0 ; i<edge[pos].size(); i++)
    {
        if (visit[edge[pos][i]]== false) 
            dfs(edge[pos][i], edge, visit);
        //가장 빠른 한개 -> false처리 안함
    }
}
void bfs(int start, vector<vector<int>>& edge, vector<bool>& visit) {
    queue<int> q;
    visit[start] = true;
    q.push(start);
    while (!q.empty()) {
        int pos = q.front();
        q.pop();
        cout << pos << " ";
        for (int i = 0; i < edge[pos].size(); i++) {
            if (visit[edge[pos][i]] == false) {
                visit[edge[pos][i]] = true;
                q.push(edge[pos][i]);
            }
        }
    }
}
int main() {
    int v;
    cin >> n >> m >> v;
  //범위가 1부터 N까지이므로 n+1로 선언해야함!!
    vector<vector<int>> edge(n + 1);
    vector<bool> visit(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) 
        sort(edge[i].begin(), edge[i].end());
    
    dfs( v, edge, visit);
    cout << endl;
    
    vector<bool> visit2(n + 1);
    bfs(v, edge, visit2);
}
