//Travel Pass
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a, b, n;
    int tc; cin>>tc;
    string s;

    while(tc--){
        cin>>n>>a>>b;
        cin>>s;
        int district = 0, state = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '0') district ++;
            else state++;
        }
        
        int ans = (district * a) + (state * b);
        cout<<ans<<endl;
    }

    
    return 0;
}