#include <iostream>
#include <cstring> // memset
using namespace std;
int arr[51][51];
int visit[51][51];
int w, h;
// 상하좌우 대각선
int ax[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int ay[8] = { 1, 0, -1, 1, -1, 1, 0, -1 };
int ans = 0;
bool checkrange(int y, int x) {
    if (y < 0 || y >= h || x < 0 || x >= w)
        return false;
    else
        return true;
}
void dfs(int y, int x) {

    int curx = x;
    int cury = y;
    visit[cury][curx] = true;
    for (int i = 0; i < 8; i++)
    {
        cury = y + ay[i];
        curx = x + ax[i];
        if (checkrange(cury, curx) == false) continue;
        if (arr[cury][curx] == 1) {
            if (visit[cury][curx] == false) {
                visit[cury][curx] = true;
                dfs(cury, curx);
            }
        }
    }
}

void countdfs() {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (arr[i][j] == 1) {
                if (visit[i][j] == false)
                {
                    dfs(i, j);
                    ans++;
                }
                }
        }
    }
}
int main() {
    while (1) {
        ans = 0;
        memset(visit, 0, sizeof(visit));
        cin >> w >> h;
        if (w == 0 && h == 0) return 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++)
                cin >> arr[i][j];
        }
        countdfs();
        cout << ans << endl;


    }
}
