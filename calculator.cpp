#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float x,y,sum,multiply,divide,sub;int i;
cout<<"                              WELCOME TO VAIBHAV's CALCULATOR "<<endl;
	 cout<<"Enter your choice"<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Subtraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Division"<<endl;
	cin>>i;
	switch(i)
	{
		case 1 : cout<<"enter two no"<<endl;
		         cin>>x>>y;
				 sum=x+y;
				 cout<<"The sum is = "<<sum;
				 break;    
		case 2 :  cout<<"enter two no"<<endl;
		         cin>>x>>y;
				 sub=x-y;
				 cout<<"The subtraction is = "<<sub;
				 break; 
		case 3 :  cout<<"enter two no"<<endl;
		         cin>>x>>y;
				 multiply=x*y;
				 cout<<"The multiplication is = "<<multiply;
				 break; 
		case 4 :  cout<<"enter two no"<<endl;
		         cin>>x>>y;
				 divide=x/y;
				 cout<<"The division is = "<<divide<<endl;
				 break;   		   		   		 
	}
	cout<<"                            THANK U FOR USING";
	getch();
	return 0;


}
