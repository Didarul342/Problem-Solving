#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   
   while(t--)
   {
       string str, word;
       cin>>str;
       cin>>word;
       
       int t1, t2, sub=0, res=0;
       for(int i=0; i<word.size()-1; i++){
           t1=str.find(word[i]) + 1;
           t2=str.find(word[i+1]) + 1;
           sub=abs(t1-t2);
           res+=sub;
       }
       cout<<res<<endl;
   }
}