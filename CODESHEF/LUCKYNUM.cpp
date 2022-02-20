//Lucky Number 
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
        int A, B, C;
        cin>>A>>B>>C;

        if(A == 7 || B == 7 || C == 7)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    
    return 0;
}