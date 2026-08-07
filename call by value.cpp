#include<iostream>

using namespace std;

void test(int &x,int y)
{  
     x+=5;
     y*=4;
     cout<<"x :"<<x<<endl;
	 cout<<"y :"<<y<<endl;	
}

int main()
{
    int a=3,b=4;
	test(a,b);
	cout<<"a :"<<a<<endl;
	cout<<"b :"<<b<<endl;	
}
