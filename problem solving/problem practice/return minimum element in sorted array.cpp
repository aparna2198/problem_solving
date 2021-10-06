#include<iostream>
using namespace std;

int fun(int ar[],int low,int high)
{
	if(high<low)return ar[0];
	if (high==low)return ar[low];
	int mid=low+(high-low)/2;
	cout<<"mid \t"<<mid<<endl;
	cout<<"low \t"<<low<<endl;
	cout<<"high \t"<<high<<endl;
	//{15,2,4,5,90,6,7};
	cout<<"ar[mid+1] \t"<<ar[mid+1]<<"smaller than ar[mid] "<< ar[mid]<<endl;
	if(mid<high && ar[mid+1]<ar[mid])
	return ar[mid+1];
	cout<<"ar[mid]  \t"<<ar[mid]<<" smaller than ar[mid-1] "<< ar[mid-1]<<endl;
	if(mid>low && ar[mid]<ar[mid-1])
	return ar[mid];
	cout<<"ar[high] \t"<<ar[high]<<" greater than  ar[mid] "<< ar[mid]<<endl;
	if(ar[high]>ar[mid])
	return fun(ar,low,mid-1);
	return fun(ar,mid+1,high);
}

/*int fun(int ar[])
{  
   
   int min=ar[0];
	for(int i =1;ar[i];i++)
	{min= min<ar[i]? min:ar[i]; 
	// 2<1 no false so min = 1 
	// 1<3 yes true 1
	cout<<" i "<<i<<" min "<<min<<endl;
	}
	return min;
}*/
int main()
{
	int a[7]={15,2,4,5,90,6,7};
	cout<<fun(a,0,6);
}
