#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;
    set<int> s;

    while(n--){
        int a;
        cin >> a;
        s.insert(a);
    }

    if(s.size() == 1) cout << "NO\n";
    else cout << *( ++s.begin() ) << endl;

    /* for element 3 or more
    int p, c=0;
    for(auto u : s){
        if(c==3) break;
        else{
            p=u;
            c++;
        }
    } */

}