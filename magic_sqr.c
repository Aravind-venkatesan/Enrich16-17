#include<stdio.h>
#include<conio.h>
void main()
{
	int num=1,i=0,j,t,t1,k,l,size,num1;
	int a[20][20];
	printf("enter the size");
	scanf("%d",&size);
	num1=size*size;
	j=(size/2);
	for(k=0;k<size;k++)
	{
		for(l=0;l<size;l++)
		{
			a[k][l]=0;
		}
	}
	while(num<(num1+1))
	{
		if((a[i][j]==0) & (i>=0) & (j<size))
		{
			a[i][j]=num;
			num++;
			t=i;
			t1=j;
			i--;
			j++;
		}
		else if((a[i][j]!=0) & (i>=0) & (j<size))
		{
			i=t+1;
			j=t1;
		}
		if(i<0)
		{
			i=size-1;
		}
		if(j>(size-1))
		{
			j=0;
		}
	}
	for(k=0;k<size;k++)
	{
		for(l=0;l<size;l++)
		{
			printf("%d",a[k][l]);
			printf("\t");
		}
		printf("\n");
	}
	getch();
}
