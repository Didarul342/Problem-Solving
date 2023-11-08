#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    
    int n, m;
    cin >> n >> m;

    map<string, string>ipName;
    while(n--){
        string name, ip;
        cin >> name >> ip;
        ipName[ip] = name;
    }

    while(m--){
        string n, ip;
        cin >> n >> ip;
        ip.pop_back();

        cout << n << " " << ip << "; #" << ipName[ip] << endl;
    }
}