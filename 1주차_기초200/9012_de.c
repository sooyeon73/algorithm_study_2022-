#include <stdio.h>
typedef struct string{
	char s[51];
}string;
int main(){
	int t=0, i=0, j=0, top=0;
	scanf("%d", &t);
	string inp[t];
	for(i=0; i<t; i++){
		scanf("%s", &inp[i].s);
	}
	for(i=0; i<t; i++){
		for(j=0; inp[i].s[j]!='\0'; j++){
			if(inp[i].s[j]=='(')
				top++;
			else
				top--;
			if(top<0)
				break;
		}
		if(top==0)
			printf("YES\n");
		else
			printf("NO\n");
		top=0;
	}
}
