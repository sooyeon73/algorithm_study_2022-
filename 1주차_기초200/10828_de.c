#include <stdio.h>
int stack[10001];
int top=-1;

int main(){
	int t=0, i=0, count=0;
	scanf("%d", &t);
	int print[t];
	char or[10];
	for(i=0; i<t; i++){
		scanf("%s", &or);
		if(!strcmp(or, "push")){
			int ip;
			scanf("%d", &ip);
			stack[++top]=ip;
		}
		else if(!strcmp(or, "pop")){
			if(top==-1)
				print[count++]=-1;
			else{
				print[count++]=stack[top--];
			}
		}
		else if(!strcmp(or, "size")){
			print[count++]=top+1;
		}
		else if(!strcmp(or, "empty")){
			if(top==-1)
				print[count++]=1;
			else
				print[count++]=0;
		}
		else if(!strcmp(or, "top")){
			if(top==-1)
				print[count++]=-1;
			else
				print[count++]=stack[top];
		}
	}
	for(i=0; i<count; i++)
		printf("%d\n", print[i]);
}
