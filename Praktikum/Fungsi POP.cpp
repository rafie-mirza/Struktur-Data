#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
}*top=NULL;

int pop(){
	struct node *temp;
	int num;
	if(top==NULL){
		printf("Underflow\n");
		return;
	}
	temp=top;
	num=top->info;
	top=top->link;
	free(temp);
	printf("Deleted :%d\n",num);
	return num;
}
