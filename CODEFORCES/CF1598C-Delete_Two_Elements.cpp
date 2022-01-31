// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
 
const int nmax = 2 * 1e5 + 10;
int input[nmax];
map<int, int>cont;

lli solve(lli n, lli sum){
    lli cnt = 0;
    lli ratio = (2 * sum);

    if(ratio % n != 0){
        cont.clear();
        return cnt;
    }

    ratio /= n;

    for(int i = 0; i < n; i++){
        int n1 = input[i];
        int n2 = ratio - n1;

        if(cont.count(n2)) cnt += cont[n2];
        if(n1 == n2 && cont.count(n2)) cnt--;
    }

    cont.clear();
    return cnt / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int tc; cin>>tc;

    while(tc--){
        lli n; cin>>n;

        lli sum = 0;
        

        for(int i = 0; i < n; i++){
            cin>>input[i];
            sum += input[i];
            cont[input[i]] += 1;
        }

        lli ans = solve(n, sum);
        cout<<ans<<endl;
    }
    
    return 0;
}