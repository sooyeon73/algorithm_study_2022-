#include <stdio.h>

int stack[100001]={0,};
int top=0, print=0;
int pop();
void push(int);
char re[200001];

int main(){
	int index = 0, count=0, i = 0, j=0;
	scanf("%d", &index);
	int buf[index];
	for(i=0; i<index; i++){
		scanf("%d", &buf[i]);
	}

	for(i=1; i<index+1; i++){
		push(i);
		for(j=count; j<index; j++){
			if(buf[j]==stack[top-1]){
				count++;
				pop();
			}
			else if(buf[j]<stack[top-1]){
				printf("NO");
				return 0;
			}
			else
				break;
		}
	}
	
	for(i=0; i<print-1; i++)
		printf("%c\n", re[i]);
	printf("%c", re[print-1]);

}

int pop(){
	re[print++]='-';
	return stack[top--];	
}

void push(int num){
	re[print++]='+';
	stack[top++]=num;	
}
