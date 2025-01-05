#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	int i,n,*p,*x,s=0;
	printf("enter the size:");
	scanf("%d",&n);
	x=(int*)calloc(n,sizeof(int));
	p=x;
	for(i=1;i<=n;i++)
	{
		printf("enter data");
		scanf("%d",x);
		x++;
	}
	x=p;
	for(i=1;i<=n;i++,x++)
	{
		printf("%d\n",*x);
		s=s+*x;
	}
	printf("sum = %d",s);
}
