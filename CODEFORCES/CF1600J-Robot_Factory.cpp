// Author: IMTIAJ
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
 
int n, m;
int ans = 1;
const int nmax = 1e3 + 10;
int grid[nmax][nmax]; // adj[1] = list of 1, adj[2] = list of 2
bool visited[nmax][nmax]; // keep trac wheather a node is visited or not
 
void dfs(int x, int y){
    visited[x][y] = true;
 
    if(y > 1 && !visited[x][y] && ((grid[x][y] & 1<<0) == 0)){
        ans++;
        dfs(x, y-1);
    }

    if(x < n && !visited[x][y] && ((grid[x][y] & 1<<1) == 0)){
        ans++;
        dfs(x+1, y);
    }

    if(y < m && !visited[x][y] && ((grid[x][y] & 1<<2) == 0)){
        ans++;
        dfs(x, y+1);
    }

    if(x > 1 && !visited[x][y] && ((grid[x][y] & 1<<3) == 0)){
        ans++;
        dfs(x-1, y);
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    cin>>n>>m;
    
    FOR(i, 1, n){
        FOR(j, 1, m){
            cin>>grid[i][j];
        }
    }
 
    vector<int>rooms;
    int x = 0;
 
    FOR(i, 1, n){
        FOR(j, 1, m){
            if(!visited[i][j]){
                dfs(i, j);
                //rooms.push_back(ans);
                x++;
                ans = 1;
            }
        }
    }
    cout<<x;
    //sort(rooms.begin(), rooms.end(), greater<int>());
    //for(auto x: rooms){
    //    cout<<x<<" ";
    //}
    
    return 0;
}