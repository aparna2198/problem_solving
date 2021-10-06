#include<iostream>
#include<string.h>


using namespace std;
int alternatingCharacters(string *s) 
{   
    int count=0;
    int n =s->length();
    //int sub;
 for(int i =0;i<s->length();i++)
  { 
   //cout<<"\n legth"<<s->length();
    
    if(s[i]==s[i+1])
    { 
	cout<<" yes they are same "<< s[i]<< "\t "<< s[i+1]<<endl; 
	//sub=s->length()-1;
   // alternatingCharacters( &s->substr(1,sub));
    count++;
   cout<<"\n count"<< count<<endl;
    }
  else
   cout<<" not same same "<<i << s[i]<< "\t "<<i+1<< s[i+1]<<endl; 
 }
return count;
}
int main()
{ 
	string a("ABAB");
	cout<<"\n"<<alternatingCharacters(&a);
}
