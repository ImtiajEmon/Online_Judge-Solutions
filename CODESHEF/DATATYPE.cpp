/// Author: IMTIAJ
// Fit in Data Type
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;
    while(tc--){
        int n, x; cin>>n>>x;
        if(x <= n) cout<<x<<endl;
        else cout<<(x % (n+1))<<endl;
    }

  return 0;
}