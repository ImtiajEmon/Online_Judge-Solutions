// ARC-117
// Author: __imEmontiaj
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;


 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a, b;
    cin>>a>>b;

    if(a > b){
      int total = (a*(a+1)) / 2;

      for(int i = 1; i <= a; i++){
        cout<<i<<" ";
      }

      for(int i = 1; i < b; i++){
        cout<<"-"<<i<<" ";
      }

      int totalb = (b * (b - 1)) / 2;

      cout<<"-"<<total - totalb<<endl;
    }

    else{
      int total = (b*(b+1)) / 2;

      for(int i = 1; i <= b; i++){
        cout<<"-"<<i<<" ";
      }

      for(int i = 1; i < a; i++){
        cout<<i<<" ";
      }

      int totala = (a * (a - 1)) / 2;

      cout<<total - totala<<endl;
    }
 
  return 0;
}
