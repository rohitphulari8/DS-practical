#include<iostream>

using namespace std;

int main()
{
	int *a,*b,*c;
	
	cout<<"\n Enter two numbers :";
	cin>>*a>>*b;
	
	*c=*a;
	*a=*b;
	*b=*c;
	
	cout<<"After swapping :"<<endl;
	cout<<"First number = "<<*a<<endl;
	cout<<"Second number = "<<*b<<endl;
	
}


