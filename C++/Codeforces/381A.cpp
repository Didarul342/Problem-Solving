#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v (n);
    for(int i=0; i<n; i++) cin >> v[i];

    int s=0, d=0, t=1;
    while(!v.empty()){
        if(t==1){
            if(*v.begin() > v.back()){
                s+=*v.begin();
                v.erase(v.begin());
            }
            else{
                s+=v.back();
                v.pop_back();
            }
            t=2;
        }
        else{
            if(*v.begin() < v.back()){
                d+=v.back();
                v.pop_back();              
            }
            else{
                d+=*v.begin();
                v.erase(v.begin());
            }
            t=1;
        }
    }
    cout << s << " " << d << endl;
}