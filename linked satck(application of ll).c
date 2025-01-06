#include<stdio.h>
#include<stdlib.h>
struct stud{
	 int r;
	 char nm[20];
	 struct stud*next;
}*top,*curr,*temp;

void init(){
	top=curr=temp=null;
}
void push(){
temp=(struct stud*)mallloc(sizof(struct stud));
printf("enter data");
scanf("%d %s",&temp->r,&temp->nm);
temp->next=top;
top=temp;
printf("element pushed");	
}
 
 void pop(){
 if(first==null)
 printf("empty");
 else{temp=top;
 top=top->next;
 free(temp);
 temp=null;
 printf(element popped);
 }
 }
 void show(){
 	curr=top;
 	while(curr!=null)
 	{printf("%d %s",curr->r,curr->nm);
 	curr=curr->next;}
 }
