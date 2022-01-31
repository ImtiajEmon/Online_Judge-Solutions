// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

const int nmax = 100 + 10;
char grid[nmax][nmax];
char chess_board[nmax][nmax];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m; cin>>n>>m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin>>grid[i][j];
        }
    }

    string s = "BW";

     for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(grid[i][j] == '-') chess_board[i][j] = grid[i][j];
            else chess_board[i][j] = s[(i+j) % 2];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout<<chess_board[i][j];
        }
        cout<<endl;
    }

    
    return 0;
}