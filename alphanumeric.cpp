#include<conio.h>
#include<iostream>
using namespace std;
void isalum(char ch);
int main()
{
	char character;int a;
	cout<<"enter your chararcter"<<endl;
	cin>>character;
 isalum(character);
	getch();
	return 0;	
}
 void isalum(char ch)
{
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'||ch>='0'&&ch<='9')
	{
		cout<<"It is a alphanumeric";		
	}
	else
	{
		cout<<"It is another character";
	}
}
