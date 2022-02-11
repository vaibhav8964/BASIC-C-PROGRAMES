#include<conio.h>
#include<iostream>
#include<stdio.h>
using namespace std;
void substring(char str[]);
int main()
{
	char ch[100];
    cout<<"Enter your string"<<endl;
    gets(ch);
    substring(ch);
    getch();
    return 0;
}
void substring(char str[])
{int j,w,n;
	cout<<"Enter the range you want to print"<<endl;
	cin>>j;
	cin>>n;
   for(w=j;w<=n;++w)
   {
   	cout<<str[w-1];
   }
}
