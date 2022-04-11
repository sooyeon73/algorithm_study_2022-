#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arr[8];
int visit[8];
int ans[8];
void dfs(int depth) {
    if (depth == m) {
        for (int i = 0; i < m; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    for (int i = 0; i < n; i++) {
        if (visit[i] == false) {
            ans[depth] = arr[i];
            visit[i] = true;
            dfs(depth + 1);
            visit[i] = false;
        }
    }
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n); //사전순!!!
    dfs(0);
}
