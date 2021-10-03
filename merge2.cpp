#include<iostream>
using namespace std;
void sort(int c[],int size);
void merge(int a[],int sizea ,int b[],int sizeb)
{
	int c[sizea+sizeb];
	for(int i=0;i<sizea;i++)
	{
		c[i]=a[i];
	}
	int k;
	k=sizea;
	for(int j=0;j<sizeb;j++)
	{
		c[k]=b[j];
		k++;
	}
	for(int m=0;m<(sizea+sizeb);m++)
	{
		cout<<c[m]<<" ";
	}
	sort(c,sizea+sizeb);
}
void sort(int c[],int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	cout<<"sorted merged array is:\n";
	for(int k=0;k<size;k++)
	{
		cout<<c[k]<<" ";
	}
}
int main()
{
	int sizea,sizeb;
	cout<<"enter the size of 1st array:\n";
	cin>>sizea;
	int a[sizea];
	cout<<"enetr the array elemenmts:\n";
	for(int i=0;i<sizea;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the size of 2nd array:\n";
	cin>>sizeb;
	int b[sizeb];
	cout<<"enetr the array elemenmts:\n";
	for(int j=0;j<sizea;j++)
	{
		cin>>b[j];
	}
	cout<<"after merging:\n";
	merge(a,sizea,b,sizeb);
	
}
