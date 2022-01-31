// Author: IMTIAJ
// B. Gregor and the Pawn Game
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

void max_pawn(){
    int n; cin>>n;
    string s1, s2;
    cin>>s1>>s2;
    int ans = 0;

    for(int i = 0; i < s2.size(); i++){
        if(s2[i] == '1'){
            if(s1[i] == '0') ans++;
            else{
                if(i != 0 && s1[i-1] == '1'){
                    ans++;
                    s1[i-1] = '0';
                }
                else if(i != s2.size()-1 && s1[i+1] == '1'){
                    ans++;
                    s1[i+1] = '0';
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;
    while(tc--){
        max_pawn();
    }
    
    return 0;
}