#include<stdio.h>
#define max(a,b) ((a>b)?(a):(b))
int main(){
	int n=0, i=0, max=0, j=0;
	scanf("%d", &n);
	scanf("");
	int P[n+1];
	for(i=0; i<n; i++)
		scanf("%d", &P[i]);
	int m[n+1];
	m[1]=P[0];
	for(i=2; i<n+1; i++){
		max=P[i-1];
		for(j=i-1; j>=i/2; j--){
			max=max(max, (m[j]+m[i-j]));
		}
		m[i]=max;
	}
	printf("n%d", m[n]);
	return 0;
}
