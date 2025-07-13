//https://codeforces.com/problemset/problem/1294/A
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
  ll a,b,c,n;
  cin >>a>>b>>c >>n ;
  int mx=max({a,b,c});
  int needed=(mx-a)+(mx-b)+(mx-c);
  if (needed<=n && (n-needed) %3==0 ){
    cout <<"YES"<<endl ;}
    else 
    cout <<"NO"<<endl ;
  
 }
return 0;
}
