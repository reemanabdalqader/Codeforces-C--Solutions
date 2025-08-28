//https://codeforces.com/contest/340/problem/A

#include <iostream>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
using namespace std;
#define ll long long 
ll gcd (ll x,ll y){
    if (y==0 )return x;
    return gcd(y,x%y);
}

ll lcm(ll x ,ll y){
    return x/gcd(x,y)*y ;
}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
ll x,y,a,b ;
cin >> x>>y>>a>>b;
ll lcm1 =lcm (x,y );
ll freqstart =(a-1)/lcm1;
ll freqend =b/lcm1 ;
cout << freqend -freqstart<< endl  ;

    return 0;
}

