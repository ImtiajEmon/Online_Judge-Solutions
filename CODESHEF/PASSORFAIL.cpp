// Author: IMTIAJ
// Pass or Fail
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
        int n, x, p;
        cin>>n>>x>>p;

        int marks = (x * 3) - (n-x);

        if(marks < p)
            cout<<"FAIL\n";
        else
            cout<<"PASS\n";
    }
    
    return 0;
}