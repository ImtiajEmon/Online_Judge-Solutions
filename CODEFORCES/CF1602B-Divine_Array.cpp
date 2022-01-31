// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
 

 const int nmax = 2000 + 10;
 int arr[nmax][nmax];
 int n, cnt;
 map<int, int>mp;

void trans(){
    
    for(int i = 1; i <= n; i++){
        
        for(int j = 0; j < n; j++){
            mp[arr[i-1][j]]++;
        }

        for(int k = 0; k < n; k++){
            arr[i][k] = mp[arr[i-1][k]];
        }

        mp.clear();
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;
    while(tc--){
        cin>>n;

        for(int i = 0; i < n; i++){
            cin>>arr[0][i];
        }

        trans();

        /*for(int i = 0; i <= cnt; i++){
            for(int j = 0; j < n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }*/

        int q; cin>>q;
        while(q--){
            int x, k; cin>>x>>k;
            if(k < n)
                cout<<arr[k][x-1]<<endl;
            else
                cout<<arr[n][x-1]<<endl;
        }
    }

    return 0;
}