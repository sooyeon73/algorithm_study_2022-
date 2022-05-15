//모든 경우를 다 고려하는 백트래킹
#include <iostream>
using namespace std;
int N, S;
int arr[20];
int result = 0;
void tracking(int idx, int sum)
{       
        if (idx == N) return;
        if (sum + arr[idx] == S) result++; // 더하고 고려!!
        tracking(idx + 1, sum + arr[idx]); //해당 idx의 수를 더하거나
        tracking(idx + 1, sum); // 안 더하거나

}
int main(void)
{        cin >> N >> S;
        for (int i = 0; i < N; i++)
                 cin >> arr[i];

        tracking(0,0);
        cout << result << endl;
        return 0;
}
