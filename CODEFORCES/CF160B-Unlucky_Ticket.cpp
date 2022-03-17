// // Author: __imEmontiaj
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;
char fhalf[100];
char shalf[100];
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin>>n;
    string s;
    cin>>s;

    for(int i = 0; i < n; i++){
      fhalf[i] = s[i];
    }

    for(int i = n, j = 0; i < 2*n; i++, j++){
      shalf[j] = s[i];
    }

    sort(fhalf+0, fhalf+n);
    sort(shalf+0, shalf+n);

    for(int i = 0; i < n; i++){
      if(fhalf[i] == shalf[i]){
        cout<<"NO\n";
        return 0;
      }
    }

    if (fhalf[0] < shalf[0]){
      for(int i = 1; i < n; i++){
        if(fhalf[i] > shalf[i]){
          cout<<"NO\n";
          return 0;
        }
      }
    }

    else{
      for(int i = 1; i < n; i++){
        if(fhalf[i] < shalf[i]){
          cout<<"NO\n";
          return 0;
        }
      }
    }

    cout<<"YES\n";
 
  return 0;
}
