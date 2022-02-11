#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,sum;
	cout<<"Enter the angles of triangle"<<endl;
	cin>>a>>b>>c;
	sum=a+b+c;
	cout<<" Sum is ="<<sum<<endl;
	if(sum==180)
	{
	cout<<"     TRIANGLE IS VALID";
	
	}
	else
	cout<<"      TRIANGLE IS INVALID";
	getch ();
	return 0;
	
}
