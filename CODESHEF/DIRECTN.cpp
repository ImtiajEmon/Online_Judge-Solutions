// Author: IMTIAJ
// Professor And Directions
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
 
int solve(string s){
    int l = 0, r = 0;
    int cnt = 0;

    if(s[0] == 'L') l++;
    if(s[0] == 'R') r++;

    for(int i = 1; i < s.size(); i++){
        if(l >= 2 || r >= 2)
            return 1;

        if(s[i] == 'L'){
            if(s[i-1] == 'L') l++;
            else l = 1;
        }

        if(s[i] == 'R'){
            if(s[i-1] == 'R') r++;
            else r = 1;
        }
    }

    return 0;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int tc; cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s; cin>>s;
        
        if(solve(s))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    
    return 0;
}