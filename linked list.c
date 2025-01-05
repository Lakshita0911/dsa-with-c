#include<stdio.h>
#include<stdlib.h>
struct emp{
	int id,sal;
	char nm[20];
	struct emp *next;
}*first,*temp,*curr,*last;
void init()
{first=temp=last=curr=Null;
}
void append(){
	temp=(struct emp*)malloc(sizeof(struct emp));
	printf("enter id,nm,sal");
	scanf("%d %s %d",&temp->id,temp->nm,&temp->sal);
	temp->null;
	if(first==null)
	{
		first==temp;
	}
	else{
		last->next=null;
		last=temp;
		printf("element inserted");
	}
}
void show(){
	
		curr=first;
		while(curr!=null)
		{
			printf("%d %s %d\n",curr->id,curr->nm,curr->sal);
			curr==curr->next;
		}
	}

int count(){
	int x=0;
	curr=firsrt;
	while(curr!=null)
	{
		printf("%d %s %d\n",curr->id,curr->nm,curr->sal);
			curr==curr->next;
			x++;
	}return(x);
}
void find(int n){
	int x=0;
	curr=first;
	while(curr!=null)
	{
		if(curr->id==n)
		{
			x=1;
			printf("found");
			break;
		}curr=curr->next;
	}
	if(x==0)
	printf("not found");
	
}
void update(int n){
	int x=0;
	curr=first;
	while(curr!=null)
	{
		if(curr->id==n)
		{
			printf("enter id ,name,sal");
			scanf("%d %s %d",curr->id,curr->nm,curr->sal);
			x=1;
			break;
		}
		curr=curr->next;
	}
	if(x==0){
		printf("not found");
	}
	
}
void insert_f()
{
	char c='y';
curr=first=temp=null;
while((c='y')||(c='Y'))
{
	temp=(struct emp*)malloc(sizeof(struct emp));
	printf("%d %s %d",&temp->id,temp->nm,&temp->sal);
	temp->next=null;
	if(first==null)
	{
		first==temp;
	}
	else{
	curr->next=temp;
	curr=temp;
	printf("continue");
	scanf("c",&c);
	}
	curr=first;
	while(curr!=null)
	{
		printf("%d %s %d",curr->id,curr->nm,curr->sal);
		curr=curr->next;
	}
	temp->next=first;
	first=temp;
	if(last==null)
	{
		last=first;
	}printf("rec inserted");
}

