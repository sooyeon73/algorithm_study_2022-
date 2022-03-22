#include <stdio.h>
#include <algorithm>

using namespace std;

int T, n, sticker[2][100001], dp[2][100001];

int main(){
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        for(int i=0; i<2; i++)
            for(int j=1; j<=n; j++)
                scanf("%d", &sticker[i][j]);
        
        dp[0][1] = sticker[0][1], dp[1][1] = sticker[1][1];
        for(int i=1; i<=n; i++){
            for(int j=0; j<2; j++){
                dp[j][i] = max(dp[!j][i-1], max(dp[0][i-2], dp[1][i-2]))+sticker[j][i];
                dp[j][i] = max(dp[j][i], dp[j][i-1]);
            }
        }
        
        printf("%d\n", max(dp[0][n], dp[1][n]));
    }
}
