#include<bits/stdc++.h>
#include<vector>

using namespace std;
/*
int main()
{  int arr[] = {8, 9, 1, 5, 6, 7, 3, 4, 2, 0}; 
    int n = sizeof(arr)/sizeof(arr[0]);//10
    int k=4	;
    int len1=k;//4
    int len2=n-k;//6
    int arr1[len1]={};
    int arr2[len2]={};
    for(int i =0;i<k;i++)
    arr1[i]=arr[i];
    for(int i=k;i<n;i++)
    arr2[i-k]=arr[i];
    sort(arr1,arr1+len1);
    sort(arr2,arr2+len2,greater<int>());
    for(int i =0;i<n;i++)
    {if(i<k)
    {
    	arr[i]=arr1[i];
	}
	else
	{
		arr[i]=arr2[6-len2];
		len2--;
	}
    }
    for(int i =0;i<n;i++)
    cout<<arr[i]<<" ";
}
void print(bool ar[])
{
	for(int i =0;i<26;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
}
void    commonCharacters(string str[],int  n)
{

bool pri[26];
bool sec[26]={false};
	memset(pri,true,sizeof(pri));
	cout<<"pri"<<endl;
	print(pri);
	for(int i =0;i<n;i++)
	{
		for(int j=0;str[i][j];j++)//"geeksforgeeks",
		{ cout<<"now dealing i "<<i<<" j "<<j<<" str "<<str[i][j]<<endl;
		
	      if(pri[str[i][j]-'a'])
	      {sec[str[i][j]-'a']=true;
	      cout<<"sec \t"<<str[i][j]-'a'<<"true "<<endl;	
		  }
		}
		print(sec);
			memcpy(pri,sec,sizeof(sec));
				print(pri);
	}
	for(int i =0;i<26;i++)
	if(pri[i])
	{
	
	char c=i+'a';
	cout<<c<<" ";
	
	}
}
void   commonCharacters(string str[], int n)
{
bool pri[26];
memset(pri,true,sizeof(pri));
cout<<"pri"<<endl;
print(pri);
	for(int i =0;i<n;i++)
	{bool sec[26]={false};
			for(int j=0;str[i][j];j++)
		{
		if(pri[str[i][j]-'a'])
	      {sec[str[i][j]-'a']=true;
	      //cout<<"sec \t"<<str[i][j]-'a'<<"true "<<endl;	
		  }
		}
			memcpy(pri,sec,sizeof(sec));
	}
	for(int i =0;i<26;i++)
	if(pri[i])
	{
	
	char c=i+'a';
	cout<<c<<" ";
	
	}
 } 
int main() 
{ 
    string str[] = { "appy", 
                    "aparnay" }; 
    int n = sizeof(str)/sizeof(str[0]); 
    commonCharacters(str, n); 
    return 0; 
} 

  void   printMapping(int A[],int  B[], int N, int M)
  {
  	unordered_map<int,list<int>> m;
  	for(int i =0;i<N;i++)
  	m[A[i]].push_back(i);//m[0]m[1]m[2]m[3] keys are initialized
    for (auto it = m.begin(); it != m.end(); ++it) 
        cout << ' ' << *it;
  	
  }
// Driver code 
int main() 
{ 
    int A[] = {2, 1, 2, 3, 3, 4, 2, 4, 1}; 
    int N = sizeof(A) / sizeof(A[0]); 
    int B[] = {1, 2, 5, 1, 2, 4, 2, 3, 2, 1}; 
    int M = sizeof(B) / sizeof(B[0]); 
    printMapping(A, B, N, M); 
        return 0; 
}

// C++ program to map elements of an array 
// to equal elements of another array 
#include <bits/stdc++.h> 
using namespace std; 

// Function to print the mapping of elements 
void printMapping(int A[], int B[], int N, int M) 
{ 

// Create a hash table where all indexes are 
// stored for a given value 
unordered_map<int, list<int>> m; 
for (int i=0; i<N; i++) 
	m[A[i]].push_back(i); 

// Traverse through B[] 
for (int i=0; i<M; i++) 
{ 
	// If a mapping is found, print the mapping and 
	// remove the index from hash table so that the 
	// same element of A[] is not mapped again. 
	if (m.find(B[i]) != m.end() && m[B[i]].size() > 0) 
	{ 
		cout << m[B[i]].front() << " "; 
		m[B[i]].pop_front(); 
	} 

	else // No mapping found 
	{ 
		cout << "NA "; 
	} 
} 
} 

// Driver code 
int main() 
{ 
	int A[] = {2, 1, 2, 3, 3, 4, 2, 4, 1}; 
	int N = sizeof(A) / sizeof(A[0]); 
	int B[] = {1, 2, 5, 1, 2, 4, 2, 3, 2, 1}; 
	int M = sizeof(B) / sizeof(B[0]); 
	printMapping(A, B, N, M); 
		return 0; 
} 

*/
// C++ program to map elements of an array 
// to equal elements of another array 
#include <bits/stdc++.h> 
#include<unordered_map>
using namespace std; 

// Function to print the mapping of elements 
void printMapping(int A[], int B[], int N, int M) 
{ 

// Create a hash table where all indexes are 
// stored for a given value 
unordered_map<int, list<int>> m; 
for (int i=0; i<N; i++) 
	m[A[i]].push_back(i); 

// Traverse through B[] 
for (int i=0; i<M; i++) 
{ 
	// If a mapping is found, print the mapping and 
	// remove the index from hash table so that the 
	// same element of A[] is not mapped again. 
	if (m.find(B[i]) != m.end() && m[B[i]].size() > 0) 
	{ 
		cout << m[B[i]].front() << " "; 
		m[B[i]].pop_front(); 
	} 

	else // No mapping found 
	{ 
		cout << "NA "; 
	} 
} 
} 

// Driver code 
int main() 
{ 
	int A[] = {2, 1, 2, 3, 3, 4, 2, 4, 1}; 
	int N = sizeof(A) / sizeof(A[0]); 
	int B[] = {1, 2, 5, 1, 2, 4, 2, 3, 2, 1}; 
	int M = sizeof(B) / sizeof(B[0]); 
	printMapping(A, B, N, M); 
		return 0; 
} 


