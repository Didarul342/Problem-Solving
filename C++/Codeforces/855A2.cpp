#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    
    int n;
    cin >> n;
    map<string, bool> cnt;

    while(n--){
        string s;
        cin >> s;
        if(cnt[s] == 1) cout << "YES\n";
        else cout << "NO\n";

        cnt[s] = 1;
    }

}