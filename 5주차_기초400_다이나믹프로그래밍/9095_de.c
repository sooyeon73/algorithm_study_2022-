#include <stdio.h>
int main(){
	int count=0, inp=0, i=0;
	int n[11];
	n[0]=1;
	n[1]=2;
	n[2]=4;
	for(i=3; i<11; i++)
		n[i]=n[i-1]+n[i-2]+n[i-3];
	scanf("%d", &count);
	scanf("");
	int re[count];
	for(i=0; i<count; i++){
		scanf("%d", &inp);
		re[i]=n[inp-1];
		scanf("");
	}
	for(i=0; i<count; i++)
		printf("%d\n", re[i]);
	return 0;
}
