#include <stdio.h>
#define min(a,b) (((a)<(b))?(a):(b))
int main(){
	
	int re[1000001]={0,};
	int i=0, N=0;
	scanf("%d", &N);
	for(i=2; i<N+1; i++){
		
		re[i]=re[i-1]+1;
		if(i%2==0)
			re[i]=min(re[i],re[i/2]+1);
		if(i%3==0)
			re[i]=min(re[i],re[i/3]+1);
	}
	printf("%d", re[N]);
	return 0;
}
