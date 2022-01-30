#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct c{
	struct c *prev;
	struct c *next;
	char data;	
}c;

int main(){
	c *head = malloc(sizeof(c));
	head->prev=NULL;
	head->next=NULL;
	c * top= head;
	
	char t;
    while((t=getchar())!='\n'){
    c* newnode = (c*)malloc(sizeof(c));
    newnode->data=t;
    newnode->prev=top;
    newnode->next=NULL;
    top->next=newnode;
    top=newnode;
    }
		
	int count=0, i=0;
	char key;
	scanf(" %d", &count);
	for(i=0; i<count; i++){
		char d;
        scanf(" %c", &key);
		switch(key){
			case 'L':
				if(top->prev) top=top->prev;
				break;
			case 'D':
				if(top->next) top=top->next;
				break;
			case 'B':
				if(!top->prev) break;
				top->prev->next=top->next;
				if(top->next!=NULL) 
					top->next->prev=top->prev;
				top=top->prev;
				break;
			case 'P':
				scanf(" %c", &d);
				c *newC = malloc(sizeof(c));
				newC->prev=top;
				newC->data=d;
				if(top->next==NULL)
					newC->next=NULL;
				else{
					top->next->prev=newC;
					newC->next=top->next;
				}
				top->next=newC;
				top=newC;
				break;	
		}
	}
	head=head->next;
	while(head){
		printf("%c", head->data);
		head=head->next;
	}
}
