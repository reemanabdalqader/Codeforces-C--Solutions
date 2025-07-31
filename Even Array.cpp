//https://codeforces.com/problemset/problem/1367/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
ll t ;
cin >> t ;
while (t--){
 ll n ;
  cin >> n;
  ll arr[ n];
  for (ll i=0;i<n ;i++){
    cin>> arr[i];
  }

  ll wrong_even=0;
  ll wrong_odd=0;

  for (ll i=0;i<n ;i++){
    if (i%2 != arr[i]%2){
      if(i%2==0)
      wrong_even++;
      else 
      wrong_odd++;
    }
  }
  if (wrong_even == wrong_odd)
    cout << wrong_even<<endl ;
    else 
    cout << -1<< endl ;

  }
return 0;
}
