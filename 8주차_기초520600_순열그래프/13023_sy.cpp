#include <iostream>
#include <vector>
using namespace std;
int n, m;
bool check = false;
//레퍼런스 &로 벡터 함수 인자 전달
void dfs(int depth, int pos, vector<vector<int>> &v, vector<int> &visit) {
    if (check) return;
    if (depth == 4) {
        cout << 1;
        check = true;
        return;
    }
    for(int i=0; i<v[pos].size(); i++){
            if (visit[v[pos][i]] == false) {
                visit[v[pos][i]] = true;
                dfs(depth + 1, v[pos][i], v, visit);
                visit[v[pos][i]] = false; //dfs로 전체 쌍에 대하여 탐색
            }
        }
}
int main() {

    cin >> n >> m;
    vector<vector<int>> v(n); //2차원선언!!!!
   
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a); 
        // 양쪽 다 고려
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> visit(n);
        visit[i] = true; //시작 pos true처리
        dfs(0, i, v, visit);

        if (check)
            return 0;
    }
    cout << 0;
    return 0;
}
