
#include <bits/stdc++.h>
#include<string>
using namespace std;

// Complete the makeAnagram function below.
 //cde abc
int fun(string a, string b) 
{
 int pair=0;
 int na=a.length();
 int nb= b.length();
 if (a==b)
 {
 return 0;
 }
   //cde abc
     for(int i = 0 ;i<na;i++)
    {  //cout<<"i val \t"<< i<<endl;
     for(int j =0;j<nb;j++)
      {// cout<< "j value \t "<< j<<endl;
       if(a[i]==b[j])
        {
         pair++;
         b.erase(j,1);
         break;// break from j for loop
        }
      }
    }
    //cout<<"\n pair"<<2*pair; this char have matching freq rest from the total needs to be deleted
return (na+nb)-(2*pair);
 }

  


/*
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
 void fun( string a , string b)

{
 if(a==b)
 {cout<<"hello";
 }
 cout<<"ot";
 	
}*/
int main()
{ //cde abc
//string a("cde");
//string b("abc");
 string a ("cde");
 string b("abc");
 cout<<"\n main"<<fun(a,b);
 //cout<<a.length();	
}
