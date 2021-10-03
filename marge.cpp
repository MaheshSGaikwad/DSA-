#include<iostream>
using namespace std;
void merge(int a[],int sizea,int b[],int sizeb)
{
	int merge[sizea+sizeb];
	int i,j=0;
	int k=0;
	while(i<=sizea && j<=sizeb)
	{
		if(a[i]<b[j])
		 merge[k++]=a[i++];
		else
		  merge[k++]=b[j++];
	
	}
		while(i<sizea)
		{
			merge[k++]=a[i++];
		}
		while(j<sizeb)
		{
			merge[k++]=b[j++];
		}
		cout<<"sorted array is:\n";
	for(int k=0;k<8;k++)
	{
		cout<<merge[k]<<" ";
	}
	
}
int main()
{
	int a[4]={2,3,1,6};
	int b[4]={9,5,7,4};
	merge(a,4,b,4);
	
	
}
