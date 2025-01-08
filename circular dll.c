#include<stdio.h>
#include<stdlib.h>
 struct stud{
 	int id,pr;
 	char nm;
 	struct stud*next,*prev;
 }*temp,*first,*last,*curr;
 
 void init()
 {
 	temp=curr=first=last=NULL;
 }
 
 void append(){
 	temp=(struct stud*)malloc(sizeof(struct stud));
	printf("enter data");
	scanf("%d %s %d",&temp->id,temp->nm,&temp->pr);
	temp->next=temp->prev=NULL;
	if(first==NULL){
		first=temp;
	}
	else{
		last->next=temp;
		last=temp;
		last->next=first;
		first->prev=last;
		printf("element inserted");
	}
 }
 
 void insert_f(){
 	temp=(struct stud*)malloc(sizeof(struct stud));
	printf("enter data");
	scanf("%d %s %d",&temp->id,temp->nm,&temp->pr);
	temp->next=temp->prev=NULL;
	if(first==NULL){
		first=last=temp;
 }
 else{
 	temp->next=first;
 	first->prev=temp
 	first->prev->next=temp;
 }
 }
 
 
 void del_f(){
 	if(first==NULL){
 		printf("empty list");
	 }
	 else{
	 	temp==first;
	 	if(first=last){
	 		first=last=NULL;
		 }
		 else{
		 first=first->next;
		 first->prev=temp->prev;
		 temp->prev->next=first;
		   }
		 temp->next=temp->prev=NULL;
		 free(temp);
		 temp=NULL
	   }
	 }
 
 void del_l(){
 	temp==last;
 	last=last->prev;
 	last->next=temp->next;
 	temp->next=temp->prev=NULL;
 	free(temp);
 	temp==NULL;
 	printf("record deleted");
 }
