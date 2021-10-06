#include<iostream>
using namespace std;
bool find(int k, int ar[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(ar[i]==k)
		return true ; 
	}
	return false;
}
void fun(int k,int ar[],int n)
{ int part1;//10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
int flag=0;
	for(int i=0;i<n;i++)
	{ /*  if(k==ar[i])
		continue;*/
	    if(k>ar[i])
		{
		part1=k-ar[i];//17-10=7	
		if(find(part1,ar,n))
		{flag=1;
		cout<<"numbers "<<ar[i]<<" "<<part1<<" sums up \t"<<k<<endl;
		break;
     	}
		}
	/*	else if(k<ar[i])
		{
		part1=ar[i]-k;//10-3
		if(find(part1,ar,n))
		cout<<"numbers "<<ar[i]<<" "<<part1<<endl;
		break;	
		}*/
		else if(k<=ar[i])
		continue;
			
	}
	if(!flag)
		cout<<"no two numbers sums up \t"<<k<<endl;
	
}
int main()
{
	int ar[5]={80,5,2,3,7};
	fun(87,ar,5);
}
