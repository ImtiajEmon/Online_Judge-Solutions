//Minimize Digit Sum 2
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

lli dig_sum(lli n, lli b){
    lli sum = 0;

    while(n != 0){
        sum += n % b;
        n /= b;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    lli n, r;
    lli tc; cin>>tc;
    while(tc--){
        cin>>n>>r;
        lli min_sum = 1e15;
        lli base = 0;

        if(r >= n){
            cout<<n<<endl;
            continue;
        }

        for(int i=r; i>=2; i--){
            lli sum = dig_sum(n, i);
            if(sum < min_sum) base = i;
            min_sum = min(min_sum, sum);
        }

        cout<<base<<endl;
    }
    
    return 0;
}