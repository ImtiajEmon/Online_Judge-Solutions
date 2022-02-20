// Author: IMTIAJ
//Qualifying to Pre-Elimination 
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
        int n, k, ans;
        cin>>n>>k;
        int arr[n];

        FOR(i, 0, n-1){
            cin>>arr[i];
        }

        sort(arr, arr + n, greater<>());

        int cnt = count(arr + k, arr + n, arr[k-1]);
        ans = k + cnt;
        cout<<ans<<endl;
    }
    
    return 0;
}