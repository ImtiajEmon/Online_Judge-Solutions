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
        int a, b, c;
        cin>>a>>b>>c;
 
        if(a == b && b == c){
            A = 1;
            B = 1;
            C = 1;
        }
        else{
            int MAX = max(a, b);
            MAX = max(MAX, c);
 
            A = MAX - a;
            if(A != 0 || a == b || a == c) A++;
 
            B = MAX - b;
            if(B != 0 || b == a || b == c) B++;
 
            C = MAX - c;
            if(C != 0 || c == a || c == b) C++;
        }
 
        cout<<A<<' '<<B<<' '<<C<<endl;
    }
    
    return 0;
}