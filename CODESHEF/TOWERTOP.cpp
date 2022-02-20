/// Author: IMTIAJ
// Building Towers
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;


int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int tc; cin>>tc;
  while(tc--){
    lli x, m; cin>>x>>m;
    lli cnt = 0;
    lli POW = 1;
    while(POW < x){
      POW *= 2;
      cnt++;
    }

    lli ans = m - cnt;
    if(ans < 0) ans = 0;
    cout<<ans<<endl;
  }

  return 0;
}