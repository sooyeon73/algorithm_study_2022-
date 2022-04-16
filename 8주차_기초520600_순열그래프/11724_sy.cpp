#include<iostream>
#include<vector>
using namespace std;
int n, m;
bool visit[1001];
void dfs(int pos, vector<vector<int>> &v) {
    visit[pos] = true;

    for (int i = 0; i < v[pos].size(); i++) {
        if (visit[v[pos][i]] == false) {
            dfs(v[pos][i],v);
        }
    }
}
int main() {
    cin >> n >> m;
    vector<vector<int>> v(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int ans = 0;

    for (int i = 1; i <= n; i++) //1~N 범위 주의
    {
        //시작하는 정점도 false 값이어야 함
        if (visit[i] == false) {
            dfs(i, v); // 한 번의 호출이 한 번의 connected component
            ans++;
        }

    }
    cout << ans;

}
