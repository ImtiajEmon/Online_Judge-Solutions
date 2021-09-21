// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    lli tc; cin>>tc;

    while(tc--){
        lli n2, n3, n4;
        cin>>n2>>n3>>n4;

        lli ans = 0;
        n3 /= 2;            // convert 3 to 6
        ans += min(n3, n4);
        n3 -= ans;
        n4 -= ans;

        if(n4 > 1){
            lli temp = min(n2, n4/2);
            ans += temp;
            n4 -= temp * 2;
            n2 -= temp;
            
        }
        
        if(n3 > 0){
            ans += min(n2/2, n3);
            n2 -= min(n2/2, n3) * 2;
        }

        if(n4 == 1){
            ans += min(n4, n2/3);
            if(n2 > 3) n2 -= 3;
        }

        ans += n2/5;
        cout<<ans<<endl;
    }

    return 0;
}