// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
 
int step_count(string s){
    int x, y, ans = 1e9;
 
    for(int i = s.size()-1; i >= 0; i--){
 
        if(s[i] == '5'){
            x = i;
            for(int j = i-1; j >= 0; j--){
                if(s[j] == '2' || s[j] == '7'){
                    y = j;
                    int temp = (x-y-1) + (s.size()-x-1);
                    ans = min(ans, temp);
                    break;
                }
            }
        }
 
        if(s[i] == '0'){
            x = i;
            for(int j = i-1; j >= 0; j--){
                if(s[j] == '5' || s[j] == '0'){
                    y = j;
                    int temp = (x-y-1) + (s.size()-x-1);
                    ans = min(ans, temp);
                    break;
                }
            }
        }
    }
 
    return ans;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int tc; cin>>tc;
 
    while(tc--){
        string s; cin>>s;
 
        int ans = step_count(s);
        cout<<ans<<endl;
    }
    
    return 0;
}