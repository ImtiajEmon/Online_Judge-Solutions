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
 
    int tc; cin>>tc;
    while(tc--){
        string s; cin>>s;
        char a = 'z'; string b;
        int k;
 
        for(int i = 0; i<s.size(); i++){
            a = min(a, s[i]);
        }
 
        k = s.find(a);
 
        b = s.substr(0, k) + s.substr(k+1, s.size()-k+1);
 
        cout<<a<<" "<<b<<endl;
    }
 
    return 0;
}