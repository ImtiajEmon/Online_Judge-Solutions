// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
 
const int nmax = 4 * 1e5 + 10;
int coordinates[nmax];

int max_mice(int n, int k){
    int l = 0, r = k-1;
    int ans = 0;
    sort(coordinates, coordinates + k);
    int dist = n - coordinates[r];

    while(l < coordinates[r]){
        l = dist;
        ans++;
        r--;
        dist += n - coordinates[r];
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int tc; cin>>tc;
    while(tc--){
        int n, k;
        cin>>n>>k;

        for(int i = 0; i < k; i++){
            cin>>coordinates[i];
        }

        int ans = max_mice(n, k);
        cout<<ans<<endl;
    }

    return 0;
}