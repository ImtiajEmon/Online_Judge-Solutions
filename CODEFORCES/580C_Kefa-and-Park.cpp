// Author: IMTIAJ
// C. Kefa and Park
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define FOR(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

const int nmax = 1e5 + 10;
vector<int> adj[nmax]; // vector<vector<int>> adj(nmax)
vector<int> cats(nmax);
bool visited[nmax]; // keep trac wheather a node is visited or not
int m;

int cat_cnt;

void dfs(int u, int cat_count){
    visited[u] = true;

    //cout<<u<<" ";
    for(auto v : adj[u]){
        if(visited[v]) continue;
        
        //if(cats[v] == 1) cat_cnt++;
        //if(cats[v] == 0 && cat_cnt <= m) cat_cnt = 0;
        cout<<v<<" ";
        //cout<<"Going "<<u<<" to "<<v<<endl; // To see what actually happend (aditional line)
        dfs(v, cat_cnt);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    int n;
    cin>>n>>m;

    for(int i = 1; i <= n; i++){
        cin>>cats[i];
    }

    for(int i = 1; i <= n-1; i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 1);
/*
    int ans = 0;
    for(int u = 1; u <= n; u++){
        if(visited[u]) continue;
        
        dfs(u, 1);

        if(cat_cnt <= m) ans++;
    }

    cout<<ans+1<<endl;*/
    
    return 0;
}