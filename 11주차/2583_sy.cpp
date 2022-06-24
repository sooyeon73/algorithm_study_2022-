#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int v[101][101]; //y x 
int visit[101][101];
int m, n, k;
int ans = 0;
vector<int> answer;
//m 행 n 열
int vy[4] = { -1, 1, 0, 0 };
int vx[4] = { 0, 0, -1,1 };
void dfs(int y, int x) {
    visit[y][x] = 1;
    ans++;
    for (int i = 0; i < 4; i++) {
       int cur_y = y+ vy[i];
       int cur_x = x+ vx[i];
       
        if (cur_x < 0 || cur_y < 0 || cur_x >= n || cur_y >= m)
            continue;

        if (visit[cur_y][cur_x] == 0 && v[cur_y][cur_x] == 0) {
            dfs(cur_y, cur_x);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        //왼쪽아래 ab 포함 
        //오른쪽위 cd 포함x
        for (int j = a; j < c; j++) {
            for (int k = b; k < d; k++) {
                v[k][j] = 1;
            }
        }
    }

   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (visit[i][j] == 0 && v[i][j] == 0) {
                ans = 0;
                dfs(i, j);
                answer.push_back(ans);
            }
        }
    }
        sort(answer.begin(), answer.end());
        cout << answer.size() << endl;
        for (int i = 0; i < answer.size(); i++) {
            cout << answer[i] << " ";
        }

}