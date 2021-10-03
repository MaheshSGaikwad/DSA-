#include<iostream>
using namespace std;
void linear(int a[],int size,int n)
{
	for(int i=0;i<size;i++)
	{
		if(a[i]==n)
		 cout<<"element found at index "<<i;
	}
}
int main()
{
	int size,n;
	cout<<"enter th esize of an array:\n";
	cin>>size;
	int a[size];
	cout<<"enter the array elements:\n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the no to be searched:\n";
	cin>>n;
	linear(a,size,n);
}
