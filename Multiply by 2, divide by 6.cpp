//https://codeforces.com/problemset/problem/1374/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#include<iomanip>
#define ll long long 
using namespace std;
int main  () {
int t ;
cin >> t;
while (t--){
  ll n ;
  cin >> n;
  int a=0,b=0;
  while (n%2==0){
    n/=2;
    a++;
  }
  while (n%3==0){
    n/=3;
    b++;
  }
  if (n!=1 || a>b){
    cout <<-1<<endl ;
  }else {
    cout <<2*b-a<<endl ;
  }
}
 
return 0;
}
