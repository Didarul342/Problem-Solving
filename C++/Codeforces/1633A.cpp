#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       if(n%7==0){
           cout<<n<<endl;
       }
       else{
           int mod=n%10;
           n=n-mod;
           if(n%7==0){
               cout<<n<<endl;
           }
           else{
               for(int i=1; i<=9; i++){
                   n+=1;
                   if(n%7==0){
                       cout<<n<<endl;
                       break;
                   }
               }
           }
           
       }
   }
}