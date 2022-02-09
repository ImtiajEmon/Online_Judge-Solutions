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
    int n, k; cin>>n>>k;
    string s; cin>>s;
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());

    if (s == rev_s || k < 1){
      cout<<1<<endl;
    }

    else{
      cout<<2<<endl;
    }
  }

  return 0;
}