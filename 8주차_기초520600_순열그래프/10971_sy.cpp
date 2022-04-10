#include<iostream>
using namespace std;
int n;
int w[10][10];
int visit[10];
int ans = 987654321;
//int arr[10][11];

void dfs(int depth, int pos, int start, int count) {
    if (depth == n) {
        if (w[pos][start] == 0)
            return;
        count += w[pos][start];
       // 경로 확인
       // arr[start][depth] = start;
       // for (int i = 0; i < n + 1; i++)
       //    cout << arr[start][i] << "  ";
       // cout << ":: " << count << endl;
        if (ans > count)ans = count;
    }
    // if (depth == 1)
    //    arr[start][0] = start;
    for (int i = 0; i < n; i++) {
        if (visit[i] == false
            && i != start
            && w[pos][i] != 0) // 연결되지 않은 경우 , 자기 자신
        {
            visit[i] = true;
            count += w[pos][i];
           // arr[start][depth] = i;
            if (count <= ans) { // 현재 count가 ans보다 작을때만 진행
                dfs(depth + 1, i, start, count);
            }
            // 초기화!!!!
            visit[i] = false;
            count -= w[pos][i];
        }
    }
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> w[i][j];
        }
    }

    for (int i = 0; i < n; i++)
        dfs(1, i, i, 0);

    cout << ans;


}
