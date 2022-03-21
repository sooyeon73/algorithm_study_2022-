#include <stdio.h>
#define max(a,b) (a>b)?(a):(b)

int main(){
	int tri[501][501];
	int n=0, i=0, j=0, m=0, inp=0;
	scanf("%d", &n);
	scanf("");
	
	tri[0][1]=0;
	for(i=1; i<n+1; i++){
		for(j=1; j<i+1; j++){
			scanf("%d", &inp);
			if(j==1)
				tri[i][j]=inp+tri[i-1][j];
			else if(j==i)
				tri[i][j]=inp+tri[i-1][j-1];
			else{
				tri[i][j]=max(tri[i-1][j], tri[i-1][j-1]);
				tri[i][j]+=inp;
			m=max(m, tri[i][j]);
		}
		scanf("");
		}
	}
	
	printf("%d", m);
	
	return 0;
}
