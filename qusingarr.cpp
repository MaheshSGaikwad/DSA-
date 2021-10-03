#include<iostream>
using namespace std;
void Enqueue(int x);
void Dequeue();
bool Isempty();
bool IsFull();
int front,rear=0;
int n;


int main()
{
    cout<<"enter the n\n";
    cin>>n;
	int a[n];
	int x;
	cout<<"enter the elements to be added";
	cin>>x;
    Enqueue(x);
    return 0;
}
bool Isempty()
{
	if(front==rear)
	 return true;
	else
	 return false;
}
bool IsFull()
{
	if(rear=n-1)
	 return true;
	else
	 return false;
}
void Enqueue(int x)
{
	if(IsFull())
	 cout<<"Queue is full we cant insert \n";
	else if(Isempty())
	  rear=front=0;
	else
	  rear++;
	  
	a[rear]=x;
	
}
