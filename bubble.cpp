//bubble sort is sorting algoritm that compares the two adjacent element and swap them if them are 
// sorting of aadjacent array elements
#include<iostream>
using namespace std;
void bubble(int a[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void print(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	//int b[]={2,7,4,1,5,3};
	//int size=sizeof(b)/sizeof(b[0]);
	int size;
	cout<<"enter the size of an array\n";
	cin>>size;
	int b[size];
	cout<<"array elements :\n";
	for(int i=0;i<size;i++)
	 cin>>b[i];
	bubble(b,size);
	cout<<"sorted array is:\n";
	print(b,size);
}
