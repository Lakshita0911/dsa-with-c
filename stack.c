#include<stdio.h>
#define size 20
int n,i,top = -1;
int stk[size];
void push(int n)
{
	
	if(top==size-1){
		printf("stack is full");
	}
	else{
		
		top++;
		stk[top]=n;
		printf("element pushed");
	}
}
void pop()
{
	
	if(top<0){
		printf("stack is empty");
	}
	else{
	top--;
	printf("element poped");
	}
}
void show()
{
	if(top>=0)
	{
	
		for(i=top;i>=0;i--)
		{
			printf("\n%d\n",stk[i]);
		}
	}
	else{printf("stack is empty");
	}
}
void peek()
{
	 if(top==-1)
	   printf("stack is empty");
	   else
         printf("peek value=%d",stk[top]);
}

int main(){
	int n,c;
	while(1){
	
		void push();
		void pop();
		void show();
		void peek();
		
		printf("The menu is \n");
		printf("\n1push\n2.pop\n3.show\n4.peek\n5.exit\n");
		printf("enter your choice:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				 printf("\nenter element");
				 scanf("%d",&c);
			push(c);
			break;
			case 2:pop();
			break;
			case 3:show();
			break;
			case 4:peek();
			
			break;
			case 5: exit(1);
			default:
				printf("Invalid choice");
		}
	}

	return 0;
}
