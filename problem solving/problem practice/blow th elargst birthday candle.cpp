#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;
int birthdayCakeCandles(int ar[],int n)
{
int set =0,count=0; //3 2 1 3
for(int i =0;i<n;i++)
{
	if(set == ar[i])// first i would check if this value is previously repeated or not
{
count++;// if yes  ill only incremente the counter
cout<<"since "<<ar[i]<<" at index"<<i<<" is first obtained at earlier index so now count is"<<count<<endl;
}
if(set<ar[i])
{// if my set value is smaller than earlier set value 
count=0;// clear the counter which was previously set for previous smaller number
set=ar[i];// set value modified
count++;//increment for that value
cout<<"found "<<ar[i]<<" at index "<<i<<" count is"<<count<<endl;
}
// basicallly algo says if its equal only increment the counter
// if the new value is greater than previous value clear the  counter and set the new value to set   
//if new value is smaller dont do anything
}
return count;
}
int main()
{
	int  a[4]={3 ,2, 1, 3};
	//int a[10]={18 ,90, 90 ,13 ,90 ,75, 90, 8, 90 ,43};
     //int a[10]={82 ,49, 82, 82, 41, 82, 15 ,63 ,38 ,25};
	cout<<birthdayCakeCandles(a,4);
}
