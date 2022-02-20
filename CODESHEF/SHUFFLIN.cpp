//Shuffling Parities
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
    int n, x;
    for(int i = 0; i < tc; i++){
        cin>>n;
        int even_idx = n/2;
        int odd_idx = n - even_idx;
        int even_element = 0, odd_element = 0;

        FOR(j, 1, n){
            cin>>x;
            if(x%2 == 0)
                even_element++;
            else
                odd_element++;
        }

        int ans = min(even_idx, odd_element) + min(odd_idx, even_element);
        cout<<ans<<endl;
    }

    
    return 0;
}