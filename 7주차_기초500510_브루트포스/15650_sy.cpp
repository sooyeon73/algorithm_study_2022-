#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;
int arr[9];
int visit[9];

void arrayloop(int i) {
    if (i == m)
    {
        for (int t = 0; t < m-1; t++) {
            if (arr[t] > arr[t + 1])
                return;
        }
      //오름차순 확인
        for (int k = 0; k < m; k++) {
            cout << arr[k] << " ";
        }
        cout << "\n";
    //여기서 visit을 초기화하면 순서고려x한경우의 답
        return;
    }
    for (int k = 1; k <= n; k++) {
        if (visit[k] == false) {
            visit[k] = true;
            arr[i] = k;
            arrayloop(i + 1);
            visit[k] = false;
        }
    }

}
int main() {

    cin >> n >> m;
    arrayloop(0);


}
