//https://codeforces.com/contest/2125/problem/B
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
  ll a,b,k  ;
  cin >>a>>b>>k ;
  ll g =__gcd(a,b );
  if ((a/g)<=k && (b/g)<=k)
  cout << 1<< endl ;
  else 
  cout << 2 << endl ;
}
return 0;
}
