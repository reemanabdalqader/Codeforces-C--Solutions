\\https://codeforces.com/problemset/problem/1374/A
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
  ll x,y,n ;
  cin>>x>>y>>n ;
  ll m =(n-y)/x;
  ll k =m*x+y;
  cout << k<< endl ;
}
return 0;
}

