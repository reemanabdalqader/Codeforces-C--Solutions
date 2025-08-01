//https://codeforces.com/problemset/problem/1335/A
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
cin >> t ;
while (t--){
  ll n ;
  cin >> n;
  if (n<=2){
    cout <<0<< endl ;
  }
  else if (n%2!=0){
    cout << n/2<< endl ;
  }else 
  cout << n/2-1<< endl ;
}
return 0;
}
