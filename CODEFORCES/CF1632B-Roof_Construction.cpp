/// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;

int nmax = 2 * 1e5 + 10;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int check [nmax] = {};

    for(int i=2 ; i<nmax; i*=2){
      check[i] = 1;
    }

    int tc; cin>>tc;
    while(tc--){
      int n; cin>>n;

      if (n < 3)
        cout<<0<<" ";

      bool flag = true;

      for(int i=n-1; i>=1; i--){
        if (check[i] && flag){
          cout<<i<<" "<<0<<" ";
          flag = false;
        }
        else if (i == 1){
          cout<<i<<endl;
        }
        else{
          cout<<i<<" ";
        }
      }
    }

  return 0;
}