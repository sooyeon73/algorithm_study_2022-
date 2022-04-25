#include<iostream>
#include<vector>
using namespace std;
int n, m;
int visit[20001];
vector<int> v[20001]; //2차원 선언

void dfs(int pos, int pre) {
    if (pre == 1)visit[pos] = 2;
    else visit[pos] = 1;
    for (int i = 0; i < v[pos].size(); i++) {
        if (visit[v[pos][i]] == 0) {
            dfs(v[pos][i], visit[pos]);
        }
    }
}

bool ifAns() {
    for (int k = 1; k <= n; k++) {
        for (int i = 0; i < v[k].size(); i++) {
            if (visit[v[k][i]] == visit[k])
                return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;

        for (int t = 0; t < m; t++) {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

            for (int k = 1; k <= n; k++) {
                if (visit[k] == 0)
                    dfs(k, 2);
            }
        

        if (ifAns())
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";

      //초기화
        for (int k = 1; k <= n; k++) {
            v[k].clear();
            visit[k] = 0;
        }

    }
}


/*할당법참고
int n, m;
vector<vector<int>> v;
vector<int> visit;
void input(){
    cin >> n >> m;
    v.assign(n + 1, vector<int>(0, 0));
    visit.assign(n + 1, false);
    ...
*/
