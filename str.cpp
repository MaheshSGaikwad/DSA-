#include<iostream>
using namespace std;
int main()
{
	string s;
	cout<<"enter the string\n";
	cin>>s;
	int len=sizeof(s)/sizeof(s[0]);
	cout<<"reversed string \n";
	for(int i=len-1;i>=0;i--)
	{
		cout<<s[i];
	}
	
}
