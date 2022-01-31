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
        int n, x;
        cin>>n>>x;
        int a, pre = -1;
        bool sorted = true;

        FOR(i, 0, n-1){
            cin>>a;
            if(a < pre) sorted = false;
            pre = a;
        }

        if(sorted || n >= 2*x)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    
    return 0;
}