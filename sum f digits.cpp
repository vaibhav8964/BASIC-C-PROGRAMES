#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int val, num,sum=0;
	cout<<"enter the no"<<endl;
	cin>>val;
num=val;
while(num!=0)
{
	sum=sum+num%10;
	num/=10;
}
cout<<sum;
	getch ();
	return 0;
	
}
