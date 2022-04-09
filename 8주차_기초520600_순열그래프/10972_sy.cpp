// 1. swap
#include<iostream>
using namespace std;
int n;
bool find(int arr[]) {
    int i=n-2;  
    // n=1 일 때 false를 출력하도록 고려해야함
    while (1) {
        if (i < 0)
            return false;
        if (arr[i] < arr[i + 1]) // 내림차순이 아닌 곳의 idx
            break;
        i--;
    }

    int k;
    //뒤에서부터 i 이후 중 i보다 큰 값 찾기
    for (k = n - 1; k > i; k--) {
        if (arr[k] > arr[i]) {
            swap(arr[k], arr[i]);
            break;
        }
    }
    
    // i 이후 부터 끝까지 swap
    for (int start = i+1, end = n - 1; start < end; start++, end--) {
        swap(arr[start],arr[end]);
    }
    return true;
}
int main() {
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (find(arr)) {
        for (int i = 0; i < n; i++)
            cout << arr[i]<< " ";
            cout << "\n";
       }
    else
        cout << "-1"<<"\n";
}

/*
2. dfs에서 해당 순열을 찾고 다음을 출력 - 예외처리로 시간초과 해결
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

*/
