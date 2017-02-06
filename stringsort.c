#include<stdio.h>
#include<string.h>
int swap1(int len[],int a,int b)
{
	int temp;
	temp=len[a];
	len[a]=len[b];
	len[b]=temp;
	return 0;
}
int swap2(char c[],char d[])
{
	char temp1[15];
	strcpy(temp1,c);
	strcpy(c,d);
	strcpy(d,temp1);
	return 0;
}

int main(void) 
{
	char str[15][15];
	int len[15],n,i,j,k,l,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
		len[i]=strlen(str[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(len[i]>len[j])
			{
				swap1(len,i,j);
				swap2(str[i],str[j]);
			}
		}
	}
	for(m=0;m<(n-1);m++)
	{
		for(k=(m+1);len[m]==len[k];k++)
		{
			for(l=0;str[k][l]!='\0';l++)
			{
				if(str[m][l]>str[k][l])
				{
					swap2(str[m],str[k]);
					break;
				}
				else if(str[m][l]<str[k][l])
				{
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\t",str[i]);
	}
	return 0;
}


