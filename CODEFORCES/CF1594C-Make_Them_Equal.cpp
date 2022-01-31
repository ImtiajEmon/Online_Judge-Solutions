// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
 
int is_equal(string s, char c){
    for(int i = 0; i < s.size(); i++){
         if(s[i] != c)
            return 0;
        }

    return 1;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;
    while(tc--){
        lli n;
        char c;
        cin>>n>>c;
        string s; cin>>s;

        if(is_equal(s, c)){
            cout<<0<<endl;
            continue;
        }

        bool flag = false;
        for(int i = (n/2) + 1; i <= n; i++){
            if(s[i-1] == c){
                cout<<1<<endl;
                cout<<i<<endl;
                flag = true;
                break;
            }
        }

        if(!flag){
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }

    return 0;
}