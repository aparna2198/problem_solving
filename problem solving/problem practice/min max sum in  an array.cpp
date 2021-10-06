#include<iostream>
using namespace std;

/*void miniMaxSum(int arr[],int n) {
	//cout<<"arr[4] \t"<<arr[4]<<endl;
for(int i =1;i<n;i++)
{
    if(arr[i-1]>arr[i])
    {
        int temp=arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=temp;
      //  cout<<"now "<<i-1<<" "<<i<<"swapped"<<endl;
    }
}
//cout<<"arr[4] \t"<<arr[4]<<endl;
int sum=0,sum2=0;
for(int i=0;i<n-1;i++)
{
sum=sum+arr[i];
}
//cout<<"arr[4] \t"<<arr[4]<<endl;
for(int i =1;i<n;i++)
{sum2=sum2+arr[i];
//cout<<"added \t"<<sum2<<" &"<<arr[i]<<" i is \t"<<i<<endl;

}
cout<<sum<<" "<<sum2;
}
*/
unsigned long sum(unsigned long ar[],int a,int n)
{unsigned long sum=0;
	for(int i =0;i<n;i++)
	{
		if(i!=a)
		sum=sum+ar[i];
	}
return sum;
}
void print(int temp[], int n)
{
	for(int i =0;i<n;i++)
	{
		cout<<temp[i]<<" ";
	}
}
void miniMaxSum(unsigned long arr[],int n)
{unsigned long temp[n];
for(int  i=0;i<n;i++)
{
	temp[i]=sum(arr,i,n);	
}
//print(temp,n);
unsigned long set=temp[0],set2=temp[0];// it is mandatory to declare this outside the for loop else you will get the reasult ibncorrect beacuse everyy i time the value is rest t o this so the neccesary changes are not carried out 
for(int i =1;i<n;i++)
{ 
	
	if(set<temp[i])
	{
		set=temp[i];
	
	}

	if(set2>temp[i])
	{
		set2=temp[i];
	}
}
cout<<set2<<" "<<set;
}
int main()
{
unsigned long ar[5]={256741038, 623958417, 467905213, 714532089 ,938071625};
    miniMaxSum(ar,5);
}
