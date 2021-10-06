#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mul(int ar[],int a,int n)
{int sum=1;
for(int i=0;i<n;i++)
{
if(i!=a)
sum=sum*ar[i];
else
continue;	
}
	//cout<<"sum \t"<<sum<<"a \t"<<a<<endl;
		return sum;

}
void fun(int ar[],int n)
{int temp[n]={};
memset(temp,1,sizeof(temp));
	for(int i =0;i<n;i++)
	{
		temp[i]=mul(ar,i,n);
	}
	for(int i =0;i<n;i++)
	{
		cout<<temp[i]<<" ";
	}
}
int main()
{
int a[5]={3,2,1};
fun(a,3);	
}
