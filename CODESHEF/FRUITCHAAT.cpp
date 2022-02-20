/// Author: IMTIAJ
// Chef and His Fruit Stand
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;
    while(tc--){
        int x, y; cin>>x>>y;
        cout<<min(x/2, y)<<endl;
    }

  return 0;
}