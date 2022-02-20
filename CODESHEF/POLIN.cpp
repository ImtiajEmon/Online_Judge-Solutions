/// Author: IMTIAJ
// Points and Lines 
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
        set<int>nx;
        set<int>ny;
        while(n--){
            int x, y; cin>>x>>y;
            nx.insert(x);
            ny.insert(y);
        }
        cout<<nx.size() + ny.size()<<endl;

    }

  return 0;
}