#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
int compare(int q[],int s[],int n)
{ int count =1;
  for(int i =0;i<n;i++)
  {
    if(s[i]==q[i])
	continue;
	else
	count=count+1;	
  }	
  return count;
}
void swap(int *i,int *j)
{
	int temp=*i;
	*i=*j;
	*j=temp;
}
int find (int a[],int data,int l )
{  int i=0;

    while(i<l)
    {
        if(a[i]==data)
        return i;
        else
        i=i+1;
    }
    return -1;
}
void minimumBribes(int q[],int n)
 {
int s[10]={};
for(int i =0;i<n;i++)
s[i]=i+1;
int index,bribe=0,count=0;
for (int i =n-1;i>0;i--)//8
{  if(s[i]==q[i])// 8==4
    continue;
    else
    {
      index=find(q,s[i],n);//i=2;i=4;i=3;i=0
      cout<<"index \t "<<s[i]<<"\t is \t "<<index<<endl;
      if(index<i)// only then u have bribed 2<4 yes;4<3;3<2;0<1
      {
        bribe=bribe+(i-index);//b=0+(4-2)=2;0+1-0
        cout<<"bribe for "<<s[i]<<"\t "<<bribe<<endl;
        count =count+bribe;
        swap(&q[i],&q[index]);
        cout<<"count so far \t"<<count<<endl;
        if(bribe>2)
        {
           cout<<"\nToo chaotic \n";
           cout<<count;
		   exit(0); 	
		}
       
        else
        bribe=0;
      }
      else
      continue;   
    }
}
int x=compare (q,s,n);
cout<<"x is"<<x<<endl;
cout<<count-x;
}

int main()
{         //  1  2  3  4  5  6  7  8
	int a[8]={1 ,2 ,5 ,3 ,7 ,8 ,6, 4};
	minimumBribes(a,8);
	
}
