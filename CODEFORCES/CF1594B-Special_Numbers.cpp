// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
 

const int mod = 1e9 + 7;

int POW(lli n, lli i){
    lli ret = 1;

    for(int j = 1; j <= i; j++){
        ret *= n;
        ret %= mod;
    }

    return ret;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;
    while(tc--){
        lli n, k;
        cin>>n>>k;

        lli ans = 0;
        for(int i = 0; i <= 31; i++){
            lli mask = (1<<i);

            if((k&mask) != 0){
                int p = POW(n, i);
                ans += p;
                ans %= mod;
            }
        }

        cout<<ans<<endl;
    }
    
    return 0;
}