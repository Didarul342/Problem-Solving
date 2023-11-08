#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    
    int n;
    cin >> n;
    map<string, int> cnt;

    while(n--){
        string s;
        cin >> s;
        cnt[s]++;
        if(cnt[s] < 2) cout << "OK\n";
        else cout << s << cnt[s] - 1 << "\n";
    }

}