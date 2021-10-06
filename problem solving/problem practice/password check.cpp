#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char pass [50],check[50];
	int flag , comp =0;
	while(flag ==0)
	{    cout<<"enter predefined\n";
		cin>>check;
		cout<<"enter the password \n";
		cin>>pass;
		
		comp=strncmp(pass,check ,12);
		if(comp==0)
		{
			flag =1;
			cout<<"password matched \n";
		}
		else
		{
			cout<<"wrong password \n";
			flag=0;
		}
		return flag;
	}
}
