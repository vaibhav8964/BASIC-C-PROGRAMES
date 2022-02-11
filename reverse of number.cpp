#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ int rem, reversed=0,n;
cout<<"enter any number"<<endl;
cin>>n;
while(n!=0)
{
	rem=n%10;
	reversed=reversed*10+rem;
	n/=10;
}
cout<<"reversed number is "<<reversed<<endl;
	getch ();
	return 0;
	
}
