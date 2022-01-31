// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;


const int nmax = 1e3 + 10;
int dam_val[nmax];

int koyda(int n, int h){
    int x = dam_val[0] + dam_val[1] ;

    if(h % x == 0) 
        return (h/x) * 2;
    else{
        int remain = h - x * (h/x);
        if(remain > dam_val[0])
            return (h/x) * 2 + 2;
        else
            return (h/x) * 2 + 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;
    while(tc--){
       int n, h;
       cin>>n>>h;

       for(int i = 0; i < n; i++){
           cin>>dam_val[i];
       }

       sort(dam_val, dam_val + n, greater<>());

       int ans = koyda(n, h);
       cout<<ans<<endl;
    }

    return 0;
}