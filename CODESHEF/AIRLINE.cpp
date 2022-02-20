// Author: IMTIAj
//Airline Restrictions
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

bool airline(int a, int b, int c, int d, int e){
    if(a+b <= d && c <= e)
        return true;
    if(a+c <= d && b <= e)
        return true;
    if(b+c <= d && a <= e)
        return true;
    return false;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a, b, c, d, e;
    int tc; cin>>tc;

    while(tc--){
        cin>>a>>b>>c>>d>>e;
        if(airline(a, b, c, d, e))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    
    return 0;
}