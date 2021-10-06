#include<iostream>
using namespace std;
void fun(int ar1[], int ar2[],int m ,int n)
{ 
int i=0;// ar1 index {1,2,3}
int j=0;// ar2 index {1,2,3, 4 ,5}
while(i<m && j<n)
{
	if(ar1[i]<ar2[j])
	{
	 cout<<	ar1[i++]<<" ";
	}
	else if(ar2[j]<ar1[i])
	{
		cout<<ar2[j++]<<" ";
	}
	else
	{
		cout<<ar2[j++]<<" ";
	    i++;
	}
}
while(i<m)
{// remaining elements 
	cout<<ar1[i++]<<" ";
}
while(j<m)
{
	cout<<ar2[j++]<" ";
}
}
int main()
{
	int a[3]={1,2,3};
	int b[5]={11,22,31,4,5};
	int m = (sizeof(a)/sizeof(a[0]));
	int n = (sizeof(b)/sizeof(b[0]));
	fun(a,b,m,n);
}
