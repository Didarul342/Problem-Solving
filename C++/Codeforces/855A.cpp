#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main()
{
    optimize();
    
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    map<string, int> cnt;
    for(auto u : v){
        cnt[u]++;
        if(cnt[u] < 2) cout << "NO\n";
        else cout << "YES\n";
    }

}