#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%3==1) cout<<1;
        for(int x=1; x<=n/3; x++) cout<<21;
        if(n%3==2) cout<<2;
        cout<<endl;
    }
}