#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int fun(int n,int ar[])
{
int c=0;
int pair[n];
for(int i=0;i<n;i++)
{ // build array of elements start including one by one in that array once one element is being repeated 
// increase the counter remove those to element
// else keep on adding element
   
    if(ar[i]==ar[i+1])//{10 ,20, 20, 10, 10, 30, 50, 10, 20};
    {
      c++;
      i+1;
    }
    else{
    pair[i]=ar[i]
	pair[i+1]=ar[i+1];	
	}
}
return c;	
}
//int ar[9]={10 ,20, 20, 10, 10, 30, 50, 10, 20};
	//cout<<fun(9,ar);
/*for(i=1;i<=n;i++)
	{
		cin>>x;
		cnt[x]++;
	}
}*/

int main()
{ int i=0;
int ar[]={1,2,3,4 };
ar[i]++	;
cout<<ar[i] <<"\t"<<i<<endl;
ar[i++];
cout<<ar[i] <<"\t"<<i;

cout<<ar[i] <<"\t"<<i;
}


