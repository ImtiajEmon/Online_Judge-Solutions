// Test Match Series 
// Author: IMTIAJ
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
        int india = 0, england = 0;
        int R;

        for(int i = 1; i <= 5; i++){
            cin>>R;
            if(R == 1) india++;
            if(R == 2) england++;
        }

        if(india > england)
            cout<<"INDIA\n";
        else if(india < england)
            cout<<"ENGLAND\n";
        else
            cout<<"DRAW\n";
        
    }
    
    return 0;
}