#include<stdio.h>
#include<stdlib.h>
struct stud{
	int id,pr;
	char nm;
	struct stud *next,*prev;
}*temp,*first,*last,*curr;

void init(){
	temp=curr=first=last=NULL;
}

void append(){
	temp=(struct stud*)malloc(sizeof(struct stud));
	printf("enter data");
	scanf("%d %s %d",&temp->id,temp->nm,&temp->pr);
	temp->next=temp->prev=NULL;
	if(first==NULL)
	   {first=temp;
	   }
	   else{last->next=temp;
	   temp->prev=last;
	   }
	   last=temp;
}

void show(){
	curr==first;
	while(curr!=NULL)
	{
		printf("%d %s %d",curr->id,curr->nm,curr->pr);
	curr=curr->next;	
	}
}

int count(){
	int x=0;
	curr=first;
	while(curr!=NULL){
	
	printf("%d %s %d",curr->id,curr->nm,curr->pr);
	curr=curr->next;
	x++;
	}return(x);
}

void find(int n){
	int x=0;
	curr=first;
	while(curr!=NULL){
	  if(curr->id==n)
	    {
	      x=1;
	   printf("found");
	break;
	}	
	curr=curr->next;
	}
	if(x==0)
	printf("not found");
}

void update(int n)
{
	int x=0;
	curr=first;
	while(curr=NULL){
		if(curr->id==n)
		{
		printf("enter id,nm,char");
		scanf("%d %s %d",curr->id,curr->nm,curr->pr);
		x=1;
		break;	
		}
			curr=curr->next;
	}
	if(x==0)
	printf("not found");
	}

void insert_f(){//void insert_last()
	temp=(struct stud*)malloc(sizeof(struct stud));
	printf("enter data");
	scanf("%d %s %d",&temp->id,temp->nm,&temp->pr);
	temp->next=temp->prev=NULL;
	if(first==NULL){
		first=last=temp;
	}
	else{
		temp->next=first;
		first->prev=temp;
		first=temp;
	}
}

void rev(){
	curr=last;
	while(curr!=NULL){
	printf("%d %s %d",curr->id,curr->nm,curr->pr);
	curr=curr->prev;
	}
}

void insert_bpos(int p){
	int i,x;
	x=count();
	if(p==1){
		insert_f();
	}
	else if((p<=0)||(p>x))
	   {
		printf("wrong input");
	}
	else{
		temp=(struct stud*)malloc(sizeof(struct stud));
	printf("enter data");
	scanf("%d %s %d",&temp->id,temp->nm,&temp->pr);
	temp->next=temp->prev=NULL;
	curr=first;
	for(i=1;i<p-1;i++){
		curr=curr->next;
	}
	temp->next=curr->next;
	temp->prev=curr;
	curr->next->prev=temp;
	curr->next=temp;
	}
}

void insert_apos(int p){
	int i,x;
	x=count();
	if(p==x){
		append();
	}
	else if((p<=0)||(p>x))
	{
		printf("wrong input");
	}
	else{
		temp=(struct stud*)malloc(sizeof(struct stud));
	printf("enter data");
	scanf("%d %s %d",&temp->id,temp->nm,&temp->pr);
	temp->next=temp->prev=NULL;
	curr=first;
	for(i=1;i<p;i++){
		curr=curr->next;
	}
	temp->next=curr->next;
	temp->prev=curr;
	curr->next->prev=temp;
	curr->next=temp;
	}
}
void del_f(){
	if(first==NULL){
		printf("empty list");
	}
	else{
		temp==first;
		if(first==last){
			first=last=NULL;
		}
		else {
			first=first->next;
			first->prev=NULL;
			temp->next=temp->prev=NULL;
			free(temp);
			temp=NULL;
		}
	}
}

void del_p(int p){
	int i,n;
	n=count();
	if("first=NULL"){
	printf("empty");
	}
	else{
		if((p<=0)||(p>n))
		 { printf("wrong pos");
		 }
		     else if(p==1)
		      {
			  del_f();
		    }
		else if(p==n){
			del_l();
		}
		else{temp=first;
		for(i=1;i<p;i++){
			temp=temp->next;
		}
		curr=temp->prev;
		temp->next->prev=curr;
		curr->next=temp->next;
		temp->next=temp->prev=NULL;
		free(temp);
		temp=NULL;
		}
	}
}
void rdel_p(int p){
	int i,n;
	n=count();
	if("first=NULL"){
	printf("empty");
	}
	else{
		if((p<=0)||(p>n))
		 { printf("wrong pos");
		 }
		     else if(p==1)
		      {
			  del_f();
		    }
		else if(p==n){
			del_l();
		}
		else{temp=last;
		for(i=1;n<p;i++){
			last=last->next;
		}
		curr=temp->prev;
		temp->next->prev=curr;
		curr->next=temp->next;
		temp->next=temp->prev=NULL;
		free(temp);
		temp=NULL;
		}
	}
}
