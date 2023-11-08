#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    string s, s1;
    cin >> s >> s1;
    
    for(int i=0; i<s.size(); i++) s[i] = tolower(s[i]);
    for(int i=0; i<s1.size(); i++) s1[i] = tolower(s1[i]);

   if(s < s1) cout << "-1";
   else if(s > s1) cout << "1";
   else cout << "0";
    
}