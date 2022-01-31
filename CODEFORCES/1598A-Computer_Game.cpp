// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

string s1, s2;

int game(int n){
    for(int i = 0; i < n-1; i++){

        if(s1[i+1] != '0' && s2[i+1] != '0')
            return 0;
    }

    return 1;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;

    while(tc--){

        int n; cin>>n;
        cin>>s1>>s2;

        if(game(n)) cout<<"YES\n";
        else cout<<"NO\n";
    }

    
    return 0;
}