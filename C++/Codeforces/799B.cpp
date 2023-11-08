#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 2e5+123;
int p[mx];
int a[mx];
int b[mx];

int main()
{
    optimize();

    int n;
    cin >> n;

    for(int i=1; i<=n; i++) cin >> p[i];
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) cin >> b[i];

    priority_queue<int, vector<int>, greater<int> > pq[7][7];

    for(int i=1; i<=n; i++){
        pq[a[i]][b[i]].push( p[i] );
    }

    int m;
    cin >> m;

    while( m-- ){
        int c;
        cin >> c;

        int res = INT_MAX;
        int f, b;

        for(int i=1; i<=3; i++){
            if( !pq[c][i].empty() && pq[c][i].top() < res ){
                res = pq[c][i].top();
                f = c, b = i;
            }
        }

        for(int i=1; i<=3; i++){
            if( !pq[i][c].empty() && pq[i][c].top() < res ){
                res = pq[i][c].top();
                f = i, b = c;
            }
        }

        if( res == INT_MAX) res = -1;
        else{
            pq[f][b].pop();
        }

        cout << res << " ";

    }

    cout << endl;
    
}