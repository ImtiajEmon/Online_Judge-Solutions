// Author: __imEmontiaj
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;
 
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin>>n;
    int arr[n+10];

    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }

    sort(arr+0, arr+n);
    int x = arr[n-1];
    int y = 1;

    for(int i = n-2; i >= 0; i--){
      if (x % arr[i] != 0 || count(arr, arr+n, arr[i]) == 2){
        y = arr[i];
        break;
      }
    }

    cout<<x<<" "<<y<<endl;

 
  return 0;
}