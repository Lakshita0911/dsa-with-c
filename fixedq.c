#include<stdio.h>
#define size 20

int q[size],front,rear;
void init(){
	front=0;
	rear=-1;
}
void insert(int x){
	if(rear==(size-1))
	printf("q is full");
	else
	{
		rear++;
		q[rear]=x;
		printf("element inserted");
	}
}
void del(){
	int i;
	if(rear==-1)
	
		printf("q is emoty");
		else
		{
		for(i=front;i<=rear;i++)
		{
			q[i]=q[i+1];
			
			}
			rear--;
			printf("element deleted");	
		}
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
	
		void insert();
		void del();
		void traverse();
	
		
		printf("The menu is \n");
		printf("\n1insert\n2.delete\n3.show\n5.exit\n");
		printf("enter your choice:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				 printf("\nenter element");
				 scanf("%d",&c);
			insert(c);
			break;
			case 2:del();
			break;
			case 3:traverse();
			break;
			
		
			default:
				printf("Invalid choice");
		}
	}
	
	return 0;
}
