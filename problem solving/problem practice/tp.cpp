#include<iostream>
using namespace std;
/*	
int main()
{
	for(int i =1 ; i<3;i++)
	{ cout<<"in for"<<endl;
		if(i>0)
		{ cout<<"if starts"<<endl;
		break;
			cout<<"if end"<<endl;
		}
	}
	cout<<"out of for"<<endl;
}*/
int main()
{  int j[5]={1,0 ,2,3,4};
for(int i=0 ;j[i];i++)
{
	cout<<"helo";
}
cout<<"exit";
	
}
/*
#include <stdio.h> 
#include <string.h> 
  
void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
} 
  
int main() 
{ 
    int n = 10; 
    int arr[n]; 
  
    // Fill whole array with 0. 
    memset(arr, 0, n*sizeof(arr[0])); 
    printf("Array after memset()\n"); 
    printArray(arr, n); 
  
    return 0; 
} */
/*int main()
{int i=1;
	if(i>0)
	{
		cout<<"hello";
		i++;
	}
}*/
/*
#include<stdio.h>
int C[27], cnt;
char p[101000];
void Chk(){
    int i, t = 0;
    for(i=0;i<26;i++){
        if(!C[i])continue;
        if(!t)t=C[i];
        if(t && t!=C[i])break;
    }
    if(i==26)cnt++;
}
int main()
{
    int i;
    scanf("%s",p);
    for(i=0;p[i];i++)C[p[i]-'a']++;
    Chk();
    for(i=0;i<26;i++){
        if(C[i]>0){
            C[i]--;
            Chk();
            C[i]++;
        }
    }
    if(cnt)printf("YES\n");
    else printf("NO\n");
}*/
