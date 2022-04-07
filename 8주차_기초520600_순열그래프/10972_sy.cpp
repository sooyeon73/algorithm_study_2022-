//다음 수열 - dfs에서 예외처리를 통해 품
#include<iostream>
using namespace std;
int dfs[10000];
bool visit[10000];
int arr[10000];
int n;
int check=0;
void find(int depth) {
    if (depth == n) {
        if (check == 1) { // 해당 순열이 답
            for (int t = 0; t < n; t++)
                cout << dfs[t] << " ";
            check = 2; // 답 순열을 출력 완료
            return;
        }
        else {
            for (int t = 0; t < n; t++)
            {
                if (dfs[t] != arr[t])
                    break;
                else if(t == n - 1)
                    check = 1; // 주어진 순열을 찾은 상태 -> 다음에 탐색하는 순열이 다음 순열
            }
        }

    }
    for (int i =1 ; i <= n; i++) {
        if (visit[i] == false) {
          // 아직 주어진 순열을 못찾은 경우 -> 주어진 순열과 같은 값으로만 구성하면 됨(i==arr[depth]
          // 주어진 순열을 찾은 후 -> 그 다음 순열을 찾아야 됨 (check==1)
          // 해당 예외처리로 시간초과 해결
            if (i == arr[depth] || check == 1) {
                dfs[depth] = i;
                visit[i] = true;
                find(depth + 1);
                visit[i] = false;
            }
        }
    }

}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    find(0);
    if (check == 1)
        cout << "-1";

}
