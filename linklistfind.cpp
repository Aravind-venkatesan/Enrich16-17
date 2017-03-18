#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
node* list_insert(node *head,int val)
{
	if(head==NULL)
	{
		node *temp=new node();
		temp->data=val;
		temp->next=NULL;
		head=temp;
	}
	else
	{
		node *temp1=head;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		node *temp=new node();
		temp->data=val;
		temp->next=NULL;
		temp1->next=temp;
	}
	return head;
}
int find_num(node *head,int num)
{
	int count=0,flag=0;
	if(head==NULL)
		return -1;
	else
	{	
		node *temp=head;
		while(temp->next!=NULL)
		{
			count++;
			if(temp->data==num)	
			{
				flag=1;
				return count;
			}
			temp=temp->next;
		}
		if(flag==0)
		{
			if(temp->data==num)
				return ++count;
			else	
				return 0;
		}
	}
}
int main() 
{
	node *head;
	head=NULL;
	int n,val,num,res;
	cout<<"enter no.of elements";
	cin>>n;
	cout<<"\nenter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>val;
		head=list_insert(head,val);
	}
	cout<<"\nnumber to be searched";
	cin>>num;
	res=find_num(head,num);
	if(res==0)
	{
		cout<<"\nentered element not found";
	}
	else if(res==-1)
	{
		cout<<"\nlist is empty";
	}
	else
	{
		cout<<"\nelement is at position "<<res;
	}
	return 0;
}
