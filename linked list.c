#include<stdio.h>
#include<stdlib.h>
struct emp{
	int id,sal;
	char nm[20];
	struct emp *next;
}*first,*temp,*curr,*last;
void init()
{first=temp=last=curr=null;
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
	temp=(struct emp*)malloc(sizeof(struct emp));
	printf("enter id,nm,sal");
	scanf("%d %s %d",&temp->id,temp->nm,&temp->sal);
	temp->next=first;
	first=temp;
	if(last==null)
	{
		last=first;
	}
	printf("rec inserted");
}

void insert_bpos(int p){
	int i,x;
	x=count();
	if((p<=0)||(p>x))
	printf("invalid input");
	else if(p==1)
	    inser_f();
	    else{
	    	temp=(struct emp*)malloc(sizeof(struct emp));
	    	printf("enter id,nm,sal");
	scanf("%d %s %d",&temp->id,temp->nm,&temp->sal);
	    	curr=first;
	    	for(i=1;i<p-1;i++)
	    	{
	    		curr=curr->next;
			}temp->next=curr->next;
			curr->next=temp;
			printf("rec inserted");
		}
	    
}	
void insert_apos(int p)
{
	int i,x;
	x=count();
	if((p<0)||(p>x))
	printf("invalid input");
	else if(p=x)
	 append();
	 else{
	 	temp=(struct emp*)malloc(sizeof(struct emp));
		 printf("enter id,nm,sal");
    	scanf("%d %s %d",&temp->id,temp->nm,&temp->sal);
    	curr=first;
    	for(i=1;i<p;i++)
    	{
    		curr=curr->next;
		}
		temp->next=curr->next;
		curr->next=temp;
		printf("rec inserted");
		}
}
void del_f(){
	if(first==null){
		printf("empty list");
	}
	else{
		temp=first;
		if(first==last){
			first=last=null;
		}
		else{first=first->next;
		}
		temp->next=null;
		free(temp);
		temp=null;
		printf("rec deleted");
	}
}
void del_P(int p){
	int i,x;
	x=count();
	if((p<=0)||(p>x))
	{printf("wrong pos");
	}
	else if(p=1)
	del_f();
	else{
		temp=first;
		for(i=1;i<p;i++){
			curr=temp;
			temp=temp->next;
		}
		if(temp==last){
			last=curr;
		}
		curr->next=temp->next;
		temp->next=null;
		free(temp);
		temp=null;
		printf("rec deleted");
	}
}

void del_val(int x){
	int y=0;
	curr=first;
	if(first=null)
	printf("empty list");
	elseif(first->id==x)
	{
		del_f();
	}
	else{
		temp=curr->next;
		while(temp!=null){
			if(temp->id==x){
				curr->next=temp->next;
				temp->next=null;
				if(temp==last){
					last==curr;
				}
				free(temp);
				temp=null;
				y=1;
				break;
			}
			else {
				curr=temp;
				temp=temp->next;
			}
		}
		if(y=0)
		printf("rec not found");
		}
	}

void sort(){
	int i,s;
	char nm[20];
	curr=first;
	while(curr!=null){
		temp=curr->next;
		while(temp!=null){
			if(curr->id>temp->id){
				i=curr->id;
				s=curr->sal;
				strcpy(nm,curr->nm);
				curr->id=temp->id;
				curr->sal=temp->sal;
				strcpy(curr->nm,temp->nm);
				temp->id=i;
				temp->sal=s;
				strcpy(temp->nm,nm);
			}temp=temp->next;
			}
			curr=curr->next;
		}
		
	}
void rev(struct emp*){
	if(curr!=null){
		rev(curr->next);
		printf("%d %s %d ",curr->id,curr->nm,curr->sal);
	}
}

void display(struct emp*curr){
	printf("%d %s %d",curr->id,curr->nm,curr->sal);
	if(curr!=null)
	rev(curr->next);
	
}


int count_(struct emp*curr){
	if(curr==null)
	return(0);
	else
	return(1+count(curr->next));
}
int main(){
	int c=1;
	init();
	while(c!=0){
		printf("LINKED LISTn1.append\n2.show\n3.count\n4.find\n5.update\n6.insert_f()\n7.insert_bpos\n8.insert_apos\n9.del_f()\n10.del_p()\n11.del_val()\n12.sort()\n13.reverse\n14.display\n15.count_\n");
		printf("enter your chice");
		scanf("%d",&c);
		switch(c){
			case 1: append();
			        break;
              case 2: show();
			        break;
			        case 3: count();
			        break;
			        case 4: find(int n);
			        break;
			        case 5: update(int n);
			        break;
			        case 6: insert_f();
			        break;
			        case 7: insert_bpos(int p);
			        break;
			        case 8: insert_apos(int p);
			        break;
			        case 9: del_f();
			        break;
			        case 10: del_p(int p);
			        break;
			        case 11: del_val(int x);
			        break;
			        case 12: sort();
			        break;
			        case 13: rev(struct emp*curr);
			        break;
			        case 14: display(struct emp*curr);
			        break;
			        case 15: count(struct emp*curr);
			        break;
			        default: printf("invalid input");
			        break;
		}
	}
	return 0;
}
