//selection is a sorting algorithm in which we select smallest element and place it to begining of array
#include<iostream>
using namespace std;
void selection(int a[],int size)
{
	int imin,temp;
	for(int i=0;i<size;i++)
	{
		imin=i;
		for(int j=i+1;j<size;j++)
		{
			if(a[j]<a[imin])
			  imin=j;
		}
		temp=a[i];
		a[i]=a[imin];
		a[imin]=temp;
	}
}
void print(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int size;
	cout<<"enter the size of an array:\n";
	cin>>size;
	int a[size];
	
	cout<<"enter the array elements:\n";
    for(int i=0;i<size;i++)
    {
    	cin>>a[i];
	}
	selection(a,size);
	cout<<"sorted array is:\n";
	print(a,size);

}
