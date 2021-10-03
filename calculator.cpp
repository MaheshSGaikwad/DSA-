//calculator program
#include<iostream>
#include<math.h>
using namespace std;
void add();
void sub();
void multi();
void div();
void sqr();
void srt();
int main()
{
	int operation;
  do{
  cout<<"Select operation from calculator"
       "\n1=Addition"
       "\n2=Substraction"
       "\n3=Multiplication"
       "\n4=Division"
       "\n5=Square"
       "\n6=Square Root"
       "\n\n Make a choice	";
   cin>>operation;
   switch(operation)
   {
   	case 1:
   		add();
   		break;
   	case 2:
   		sub();
   		break;
   	case 3:
   		multi();
   		break;
   	case 4:
   		div();
   		break;
   	case 5:
   		sqr();
   		break;
   	case 6:
   		srt();
   		break;
   	default:
   		cout<<"Enter valid choice!!";
   		break;
   }
   cout<<"\n---------------------------------------------\n";
   }while(operation<=6);
}

 void add()
 {
 	int n,sum=0,num;
 	cout<<"How many numbers you want to add:\n";
 	cin>>n;
 	cout<<"Enter the numbers:\n";
 	for(int i=0;i<n;i++)
 	{
 		cin>>num;
 		sum+=num;
	 }
	 cout<<"Addition of given numbers is="<<sum;
 }
 void sub()
 {
 	int num1,num2,sub;
 	cout<<"\nEnter the first number:";
 	cin>>num1;
 	cout<<"\nEnter the second number:";
 	cin>>num2;
 	sub=num1-num2;
 	cout<<"\nSubstraction of number ="<<sub;
 
 	
 }
 void multi()
 {
 	int num1,num2,multi;
 	cout<<"\nEnter the first number:";
 	cin>>num1;
 	cout<<"\nEnter the second number:";
 	cin>>num2;
 	multi=num1*num2;
 	cout<<"\nMultiplication of numbers ="<<multi;
 	
 }
 void div()
 {
 	int num1,num2,div;
    cout<<"\nEnter the first number:";
 	cin>>num1;
 	cout<<"\nEnter the second number:";
 	cin>>num2;
 	div=num1/num2;
 	cout<<"\nDivision of number ="<<div;
  }
  void sqr()
  {
  	int num;
  	cout<<"\nEnter the number:";
  	cin>>num;
  	cout<<"\nSquare of number="<<num*num;
  }
  void srt()
  {
  	int num;
  	cout<<"\nEnter the number:";
  	cin>>num;
  	cout<<"\nSquare root of number="<<sqrt(num);
  }
