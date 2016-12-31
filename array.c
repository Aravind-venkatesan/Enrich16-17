#include<stdio.h>
int count(int a[],int i)
{
	int count=0;
	for(int j=i;a[j]==a[i];j++)
	{
		count++;
	}
	printf("repeated=%d",count);
}
int main()
{
	int a[50],k,n,flag=0;
	printf("enter the no.of elements");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements");
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			flag=1;
			count(a,i);
			break;
		}
	}
	if(flag==0)
	{
		printf("does not exist");
	}
}
