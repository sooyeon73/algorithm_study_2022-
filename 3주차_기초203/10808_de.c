#include <stdio.h>
#include <string.h> 
int main(){
	char w[100];
	scanf("%s", &w);
	int re[26]={0, };
	int i, c;
	for(i=0; i<strlen(w); i++){
		c=w[i]-97;
		re[c]=re[c]+1;
	} 
	for(i=0; i<26; i++){
		printf("%d ", re[i]);
	} 
	return 0;
}
