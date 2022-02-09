/// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;
 
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int tc; cin>>tc;  
    while(tc--){
        int n; cin>>n;
        string s; cin>>s;
 
        if (n > 2){
            cout<<"NO\n";
            continue;
        }
 
        if (n == 2 && s[0] == s[1]){
            cout<<"NO\n";
            continue;
        }
 
        cout<<"YES\n";
    }
 
  return 0;
}