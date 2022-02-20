/// Author: IMTIAJ
// Equal MEX  
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;
    while(tc--){
        int n, x;
        cin>>n;
        int cnt[n + 10] = {};
        for(int i = 1; i <= 2*n; i++){
            cin>>x;
            cnt[x]++;
        }

        for(int i = 0; i <= n+1; i++){
            if(cnt[i] == 0){
                cout<<"Yes\n";
                break;
            }
            else if(cnt[i] == 1){
                cout<<"No\n";
                break;
            }
        }
    }    

  return 0;
}