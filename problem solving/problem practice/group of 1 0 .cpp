#include<iostream>
using namespace std;
/*int maxLen(int arr[], int n)
{ int count[2]={0};
//Your code here
for(int i =0;i<n;i++)
{ ++count[arr[i]];
}
for(int i =0;i<2;i++)
cout<<"count is \t"<<i<<" "<<count[i]<<endl;
for(int i =0;count[arr[i]];i++)
{ //cout<<count[0]<<" this"<<count[1]<<endl;
    if(count[0]==count[1])
    {
        return count[arr[i]]*2;
    }
    else
    {
        if(count[0]<count[1])
       return count[0]+1;
        else
        return count[1]+1;
    }
}
}
bool findone(int ar[],int a,int n)
{
	for (int i = a;i<n;i++)
	{
		if(ar[i]==1)
		{ cout<<"found 1 at index \t"<<i<<endl;
		 return true;
        
		}
		else 
		return false;
	}
}
int maxLen(int ar[],int n)
{int count=0;
	for (int i =0;i<n;i++)
	{
		if(ar[i]==0 && ar[i+1]==1|| ar[i]==0 &&findone(ar,i+1,n))
		{
			count++;
			cout<<"for i \t"<<i<<" count "<<count<<endl;;	
		}
	
		
		else
	    continue;
	}
	return count*2;
}

	

int maxLen(int ar[],int n)
{
int count=0 ,flag=0;
	for (int i =0;i<n;i++)
	{   
		if(ar[i]==0 && i<14)
		{  cout<<"found 0 at index \t"<<i<<endl;
			if(findone(ar,i+1,n) )
			{
			count++;
			cout<<"count value  is \t"<<count<<endl;		
			cout<<endl<<endl;
			}
			else
			{flag++; 
			
			cout<<"one zero is missed at"<<i<<endl; 
			}
    	}
	   
	}
	while(flag )
	{
		count++;
		flag--;
	}
	return count;
}
int fun(int arr[], int n)  
{  
    int sum = 0,count=0;  
    int maxsize = -1;  
  
    // Pick a starting point as i  
    for (int i = 0; i < n-1; i++)  
    {  
        sum = (arr[i] == 0)? -1 : 1;  
  
        // Consider all subarrays starting from i  
        for (int j = i+1; j < n; j++)  
        {  
            (arr[j] == 0)? (sum += -1): (sum += 1);  
  
 
            if (sum == 0 && maxsize < j-i+1)  
            {  cout<<"match found at i"<<i<<" j "<<j<<endl;
                maxsize = j - i + 1;  
                count++; 
            }  
        }  
        
    }
    return count;
}

int fun(int ar[],int n)
{
	int sum =0;
	int maxsize=-1, startindex;
	for(int i =0;i<n-1;i++)
	{
		sum=(ar[i]==0)?-1:1;
		for(int j=i+1;j<n;i++)
		{
			(ar[j]==1)?(sum+=1):(sum+=-1);
			if(sum==0 && maxsize < j-i+1)
			{
				maxsize=j-i+1;
				startindex=i;
			}
		}
	}
 return (startindex + maxsize);
}*/
int fun(int arr[], int n)  
{  
    int sum = 0;  
    int maxsize = -1, startindex;  
  
    // Pick a starting point as i  
    for (int i = 0; i < n-1; i++)  
    {  
        sum = (arr[i] == 0)? -1 : 1;  
  
        // Consider all subarrays starting from i  
        for (int j = i+1; j < n; j++)  
        {  
            (arr[j] == 0)? (sum += -1): (sum += 1);  
  
            // If this is a 0 sum subarray, then  
            // compare it with maximum size subarray  
            // calculated so far  
            if (sum == 0 && maxsize < j-i+1)  
            {  
                maxsize = j - i + 1;  
                startindex = i;  
            }  
        }  
    }  
    if (maxsize == -1)  
        cout << "No such subarray";  
    else
        //cout << startindex << " to " << startindex + maxsize - 1;  
  
    return startindex + maxsize;  
}  
int main()
{
//	int ar[84]={0 ,1 ,1 ,1, 1, 0, 0, 1, 1 ,0 ,1 ,0 ,1 ,1 ,0, 0, 0, 0, 0 ,1, 0, 1, 1, 0, 0, 0, 1 ,1 ,1 ,1 ,0 ,0 ,0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0 ,0 ,1 ,0 ,1 ,0, 1 ,0 ,0, 1, 0, 0, 0 ,1 ,1, 1, 0, 1, 0, 1, 0, 1 ,1 ,1, 0, 1 ,0 ,1 ,0 ,1 ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 };
//	int ar[85]={1, 1 ,0, 1, 0 ,0 ,0 ,0, 1, 0 ,0 ,0 ,0 ,1 ,1 ,0 ,0 ,0 ,1 ,1 ,1 ,0 ,1 ,0 ,0, 0, 1, 0, 0, 1, 1 ,1,0,1, 0, 1, 1, 1 ,1, 1, 1, 1, 1, 1,1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 1,1, 0 ,0,0 ,1, 0, 1,0 ,1 ,0,1 ,0 ,1 ,1, 1, 1, 0 ,0 ,0, 1 ,0 ,1, 0 ,0, 0 ,0};
	//int ar[85]={  1, 1, 1, };40
//int ar[5]={1, 0, 0 ,0 ,1};
int ar[15]={1, 0 ,1 ,1 ,1 ,1, 1, 0 ,0 ,1, 1 ,0 ,1 ,1 ,0};
	cout<<fun(ar,15);
	
}




