// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
 
char input[305][305];

int is_x(int n){
    char diag = input[1][1];
    char non_diag = input[1][2];

    if (diag == non_diag)
        return 0;
        
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){

            if(i == j || i+j == n+1){
                if(input[i][j] != diag)
                    return 0;
            }

            else{
                if(input[i][j] != non_diag)
                    return 0;
            }
        }
    }

    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int n; cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin>>input[i][j];
        }
    }   

    if(is_x(n)) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}