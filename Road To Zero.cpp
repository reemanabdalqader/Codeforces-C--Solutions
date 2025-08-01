//https://codeforces.com/problemset/problem/1342/A
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
cin>> t;
while (t--){
  ll x,y,a,b;
  cin >>x>>y>>a>>b;
  ll x1=min(x,y);
  ll y2=max(x,y);
  ll a2=2*a;
  ll price =0;
  if (a2<b){
  price =a2*x1 ;
  }else {
    price =b*x1 ;
  }
 price = price+(y2-x1)*a;
 cout << price << endl ;
}
return 0;
}
