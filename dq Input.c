#include<stdio.h>
#define size 20

int q[size],front,rear;
void init(){
	front=0;
	rear=-1;
}
void insert_rear(int x){
	if(rear==(size-1))
	printf("q is full");
	else
	{
		rear++;
		q[rear]=x;
		printf("element inserted");
	}
}
void del_front(){
	int i;
	if(rear==-1){
	
		printf("q is empty");}
		else if(front==rear)
		{
			rear=-1;
			front =0;	
		}
		else{
			front++;
		}printf("elemnet deleted");
	
}
void del_rare(){
	int i;
	if(rear==-1){
	
		printf("q is empty");}
		else if(front==rear)
		{
		init();	
		}
		else{
			rear--;
		}printf("elemnet deleted");
	
}
void traverse(){
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d",q[i]);
	}
}
int main(){
	int n,c;
	while(1){
	
		void insert_front();
		void del_front();
		void del_rare();
		void traverse();
	
		
		printf("The menu is \n");
		printf("\n1insert from rear\n2.delete from front\n3.delete from rare\n4.traverse\n5.exit\n");
		printf("enter your choice:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				 printf("\nenter element");
				 scanf("%d",&c);
			 insert_rear(c);
			break;
			case 2:del_front();
			break;
			case 3:del_rare();
			break;
			case 4:traverse();
			break;
			case 5:exit(1);
			
		
			default:
				printf("Invalid choice");
		}
	}
	
	return 0;
}
