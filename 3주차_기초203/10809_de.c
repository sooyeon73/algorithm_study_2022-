#include <stdio.h>
int main(void){
	char word[101];
	scanf("%s", &word);
	
	int count[26];
	int i=0, j=0;
	for(i=0; i<26; i++){
		for(j=0; word[j]!='\0'; j++){
			if(word[j]==(97+i)){
				count[i]=j;
				break;
			}
			count[i]=-1;
		}
	}
	for(i=0; i<26; i++)
		printf("%d ", count[i]);
	return 0;
}
