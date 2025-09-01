//https://codeforces.com/problemset/problem/47/A
#include <iostream>
#include <map>
#include <cmath>
#include <unordered_map>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
using namespace std;
#define ll long long
bool test (ll b ){
    ll d =1+8*b ;
ll sqrt_d=sqrt(d);
if (sqrt_d*sqrt_d != d)return false ;
ll n =(-1+sqrt_d)/2;
if (n*(n+1)/2 ==b )
return true ;
else return false ;
 
}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
ll y ;
cin >> y;
bool ans =test (y);
if (ans )
cout <<"YES"<<endl ;
else 
cout <<"NO"<<endl ;
 
    return 0;
}
