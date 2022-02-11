#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,s,area;
	cout<<"enter side of triangle"<<endl;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"the area is= "<<area;
	getch ();
	return 0;
	
}
