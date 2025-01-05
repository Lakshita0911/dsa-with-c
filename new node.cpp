struct emp{
	int id,sal;
	char nm[20];
	struct emp*next;
}first,temp,curr;
main()
char c='y'
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
		curr=curr->next
	}
}
