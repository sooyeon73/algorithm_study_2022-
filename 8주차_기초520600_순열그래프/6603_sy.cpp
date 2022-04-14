// 순서를 고려하지 않는 문제와 풀이 다름
#include <iostream>
using namespace std;
int arr[12];
int ans[6];
int n;
void dfs(int depth, int start) {
    if (depth == 6) {
        for (int i = 0; i < 6; i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    }
    //현재 위치에서 오른쪽에 있는 값들만 접근 가능
    for (int i = start; i < n; i++) {
            ans[depth] = arr[i];
            dfs(depth + 1, i+1);            
        }

    
}
int main() {
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        dfs(0,0);
        cout << "\n";
    }


}
