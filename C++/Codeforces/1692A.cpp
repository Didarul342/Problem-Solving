#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int count = 0;
        int arr[6];

        for(int i=0;i<4;i++){
            cin >> arr[i];
        }
        
        for(int i=1;i<4;i++){
           if(arr[i] > arr[0]){
               count++;
           }
        }
        cout << count << endl;
        count = 0;
    }
}