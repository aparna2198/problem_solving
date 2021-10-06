#include<iostream>
using namespace std;
int n(int  arr[6][6])
 { int sum=0;
 int m =INT_MIN;

  for(int i=0 ;i<4;i++)
  { cout<<"for i"<<endl;
      for(int j=0;j<4;j++)
  {  cout<<"for j "<<endl;
     sum = (arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
     cout<<"sum is "<<sum<<endl;
    if(sum>m)
   {
   	 m=sum;
   	 cout<<" m is"<<m<<endl;
   }
  }	
}
return  m;
}


int main()
{
int ar[6][6]=
{{-1 ,-1, 0 ,-9 ,-2, -2},{-2, -1, -6, -8, -2, -5},{-1, -1, -1, -2, -3 ,-4},{-1 ,-9, -2, -4, -4, -5},{-7, -3, -3 ,-2, -9 ,-9 },{-1 ,-3 ,-1, -2, -4 ,-5}};
cout<<"in "<<endl;
cout<<n(ar);
cout<<"yes";
}
