#include <stdio.h>
#define max(a,b) (a>b)?(a):(b)
int main(){
	int T=0, n=0, i=0, j=0;
	scanf("%d\n", &T);
	int inp[2][100001];
	int dp[2][100001];
	int re[T];
	for(i=0; i<T; i++){
		scanf("%d\n", &n);
		for(j=1; j<n+1; j++)
			scanf("%d", &inp[0][j]);
		scanf("");
		for(j=1; j<n+1; j++)
			scanf("%d", &inp[1][j]);
			
		dp[0][0]=0;
		dp[0][1]=inp[0][1];
		dp[1][0]=0;
		dp[1][1]=inp[1][1];
		for(j=2; j<n+1; j++){
			dp[0][j]=max(dp[1][j-1], dp[1][j-2]);
			dp[0][j]+=inp[0][j];
			dp[1][j]=max(dp[0][j-1], dp[0][j-2]);
			dp[1][j]+=inp[1][j];
		}
		re[i]=max(dp[0][n], dp[1][n]);
	}
	
	for(i=0; i<T; i++)
		printf("%d\n", re[i]);
	return 0;
}
