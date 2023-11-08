#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, a, b, c, d;
        cin>>n>>a>>b>>c>>d;
        
        int res1, res2;
        res1=n*(a+b);
        res2=n*(a-b);
        
        if( res1<(c-d) || res2>(c+d) ){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
}