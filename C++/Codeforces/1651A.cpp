#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int p=pow(2, n);
        cout<<p-1<<"\n";
    }
}