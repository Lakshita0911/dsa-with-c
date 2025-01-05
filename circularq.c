#include<stdio.h>
#define size 20
int q[size],front,rear;
void init(){
	front=0;
	rear=-1;
}
void insert(int x)
{
	if((front==0)&&(rear==size-1)||(rear+1==front)&&(rear!=-1))
	printf("q is full");
	else
	{
		if(rear=size-1)
		{
			rear=0;
		}
		else
		{
			rear++;}
			q[rear]=x;
			printf("element inserted");
		}
		}
	void del()
	{
		if(rear==-1)
		printf("q is empty");
		else{
			if(front==rear)
			{
				init();
			}
			else if(front==size-1)
			{
				front==0;
			}
			else
			{front++;
			printf("element deleted");
			}
		}
	}
	void show(){
		int i;
		for(i=front;i!=rear;i++)
		{
			if(rear==-1)
			break;
			printf("%d",q[i]);
		else	if(i==size-1)
			i=-1;
		}
		printf("%d",q[i]);
		
	}int main(){
	int n,c;
	while(1){
	
		void insert();
		void del();
		void traverse();
	
		
		printf("The menu is \n");
		printf("\n1insert\n2.delete\n3.show \n4.exit\n");
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
			case 3:show();
			break;
			
		
			default:
				printf("Invalid choice");
		}
	}
	
	return 0;
}
