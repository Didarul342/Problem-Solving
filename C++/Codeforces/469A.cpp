#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;
    set<int>s;

    int p;
    cin >> p;
    while(p--){
        int a;
        cin >> a;
        s.insert(a);
    }

    cin >> p;
    while(p--){
        int a;
        cin >> a;
        s.insert(a);
    }

    if(s.size() == n) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
}