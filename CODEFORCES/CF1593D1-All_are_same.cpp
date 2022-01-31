// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
 
int input[45];
int n, a;
 
int find_max(){
    vector<int>v;
    int ret = abs(input[0] - input[1]);
    for(int i = 1; i < n-1; i++){
        ret = __gcd(ret, abs(input[i] - input[i+1]));
 
        if(input[i] != input[0]){
            v.push_back(input[i]);
        }
    }
 
    if(input[0] != input[n-1])
        v.push_back(input[n-1]);
 
    if(v.size() == 0) return -1;
    return ret;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int tc; cin>>tc;
 
    while(tc--){
        cin>>n;
 
        for(int i = 0; i < n; i++){
            cin>>a;
            input[i] = a;
        }
 
        int ans = find_max();
        cout<<ans<<endl;
    }
    
    
    return 0;
}