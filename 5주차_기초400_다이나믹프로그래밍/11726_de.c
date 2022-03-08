#include <stdio.h>
int main(){
	int d[1001]={0, };
	int inp=0, i=0;
	scanf("%d", &inp);
	d[1]=1;
	d[2]=2;
	for(i=3; i<inp+1; i++){
		d[i]=(d[i-2]+d[i-1])%10007;
	} 
	printf("%d", d[inp]);
	return 0;
}
