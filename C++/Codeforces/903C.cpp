#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int n;
    cin >> n;
    map<int, int> freq;
    while(n--){
        int a;
        cin >> a;
        freq[a]++;
    }

    int mx = 0;
    for(auto u : freq) mx = max(mx, u.second);
    cout << mx << endl;
}
