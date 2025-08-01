//https://codeforces.com/problemset/problem/1181/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
  ll x,y,z;
  cin >>x>>y>>z;
  ll intial_total =x/z+y/z;
  ll rem_x=x%z;
  ll rem_y=y%z;

  if (rem_x+rem_y>=z){
    ll total=intial_total+1;
    ll transfer=z-max(rem_x,rem_y);
    cout <<total<<" "<<transfer;
  }else {
    cout <<intial_total<<" "<<0;
    }
return 0;
}

