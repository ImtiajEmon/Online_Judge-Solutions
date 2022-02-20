//Minimize Digit Sum
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

int dig_sum(int n, int b){
    int sum = 0;

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

    int n, l, r;
    int tc; cin>>tc;
    while(tc--){
        cin>>n>>l>>r;
        int min_sum = INT_MAX;
        int base = 0;

        if(r >= n && n >= l){
            cout<<n<<endl;
            continue;
        }

        if(n < l){
            cout<<l<<endl;
            continue;
        }

        for(int i=r; i>=l; i--){
            int sum = dig_sum(n, i);
            if(sum < min_sum) base = i;
            min_sum = min(min_sum, sum);
        }

        cout<<base<<endl;
    }
    
    return 0;
}