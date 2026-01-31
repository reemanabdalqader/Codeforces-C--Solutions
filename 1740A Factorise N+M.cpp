//https://codeforces.com/problemset/problem/1740/A

#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr); 
ll max =100000;
vector <bool> prime (max+1 ,true );
prime [0]=false ;
prime [1]= false ;
for (int i=2;i*i<max ;i++){
if (prime [i]){
  for (int j=i*i ;j<=max ;j+=i){
    prime [j]=false ;
  }
}
}
 int t ;
 cin >> t ;
 while (t--){
  ll x ;
  cin >> x ;
  int count =2 ;
  while (true ){
if (prime [count]){
  int g = x+count ;
  if (!prime [g]){
    cout <<count <<endl ;
    break;
  }
}
count ++ ;
  }}
 return 0;
  }
