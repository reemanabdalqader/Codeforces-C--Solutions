//https://codeforces.com/problemset/problem/1409/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
int t ;
cin >> t;
while (t--){
  ll a, b;
  cin >> a>> b;
  ll diff =abs(b-a);
  ll ans =diff/10 ;
  if (diff%10 == 0){
    cout << ans << endl  ;
  }
  else {
    cout << ans+1 << endl ;
  }
}
return 0;
}
