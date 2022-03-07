#include <stdio.h>
#include <algorithm>

using namespace std;

int N;
int card[1001];
int dp[1001];

int main() {
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        scanf("%d", &card[i]);

    for (int i = 1; i <= N; i++) {
        int val = 0;
        for (int j = 1; j <= i; j++) {
            val = max(val, card[j] + dp[i - j]);
        }
        dp[i] = val;
    }

    printf("%d", dp[N]);
}
