#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isVowel (char c){
    return ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y' );
}

int main()
{
    optimize();

    string s, str;
    cin >> s;

    for(auto u : s){
        char c = tolower(u);
        if(isVowel(c) == 0){
            str+='.';
            str+=c;
        }
    }
    cout << str << endl;
}
