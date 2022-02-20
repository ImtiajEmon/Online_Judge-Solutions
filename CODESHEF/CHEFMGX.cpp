// Author: IMTIAJ
// Chef and Magical Steps
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
 

const int MAX = 1e7 + 10;
bool prime[MAX];
int tot_primes_till[MAX];

void seg_sieve()      // prime[i] == false : prime, otherwise not prime
{
     //fill(begin(prime), end(prime), true);
     prime[0] = prime[1] = true;

     for (int i = 2; i <= MAX; i++)
     {
          tot_primes_till[i] = tot_primes_till[i - 1];

          if (prime[i]) // if not prime
               continue;

          tot_primes_till[i]++;

          for (int j = 2 * i; j <= MAX; j += i)
          {
               prime[j] = true;
          }
     }
}

 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    seg_sieve();
 
    int tc; cin>>tc;
    while(tc--){
        int x, y;
        cin>>x>>y;

        int ans = y - x - (tot_primes_till[y] - tot_primes_till[x+1]);

        cout<<ans<<"\n";
    }
    
    return 0;
}