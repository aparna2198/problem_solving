#include<iostream>
using namespace std;
	void table(int n)
	{
		for (int i=1;i<11;i++)
		{
		cout<<n*i<<endl;
		}
	}
	int main()
	{int c;
	while(1<c<101)
	{
		cout<<"enter the number"<<endl;
		cin>>c;
		table(c);
    }
	}
