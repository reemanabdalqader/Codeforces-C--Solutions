//https://codeforces.com/problemset/problem/1296/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
  ll t ;
  cin >> t;
  while (t--){
    ll n ;
    cin >>n ;
    ll arr [n ];
    for (ll i=0 ;i<n ;i++) cin >> arr [i];
    int even =0;
    int odd  =0 ;
    for (int i=0;i<n ;i++){
        if (arr[i]%2==0)even ++;
        else odd ++;
    }
    if (odd>0&& even>0)
    cout <<"YES"<<endl ;
    else if (odd>0 && odd%2==1)
    cout <<"YES"<<endl ;
    else 
    cout <<"NO"<<endl ;

} 
return 0;
}
