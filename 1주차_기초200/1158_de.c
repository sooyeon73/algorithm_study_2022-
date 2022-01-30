#include <stdio.h>

int main(){
	int N=0, K=0, count=0, i=0, index=0;
	scanf("%d %d", &N, &K);
	int check[5000]={0, };
	printf("<");
	for(i=0; i<N-1; i++){
		for(count=0; count<K; count++){
			while(1){
				index=(index+1)%N;
				if(!check[index]) break;
			}
		}
		check[index]=1;
		if(index==0)
			index+=N;
		printf("%d, ", index);
	}
	while(1){
		index=(index+1)%N;
		if(!check[index]) break;
	}
    if(index==0)
			index+=N;
	printf("%d> ", index);
	
}
