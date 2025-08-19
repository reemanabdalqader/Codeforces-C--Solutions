// https://codeforces.com/problemset/problem/577/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#include<iomanip>
#include<unordered_map>
#define ll long long 
using namespace std;

int main  () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 ll n,x;
 cin >>n >>x ;
 ll ans =0;
 for (int i=1;i*i<=x;i++){
  
  if (x%i==0){
    ll j=x/i;
    if (i<=n && j<=n ){
      if (i==j)ans+=1;
      else ans+=2;
    }
  }
 }
 cout << ans << endl ;
return 0;
}
