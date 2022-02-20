// Author: IMTIAJ
// Chef And Salary Pay
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
        int x, y;
        cin>>x>>y;
        string s; cin>>s;

        int day_cnt = 0, streak_cnt = 0;
        int cnt = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                day_cnt++;
                cnt++;
            }

            if(s[i] == '0'){
                streak_cnt = max(streak_cnt, cnt);
                cnt = 0;
            }
        }
        streak_cnt = max(streak_cnt, cnt);

        int salary = (day_cnt * x) + (streak_cnt * y);
        cout<<salary<<endl;
    }
    
    return 0;
}