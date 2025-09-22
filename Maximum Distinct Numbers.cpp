//https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/E

#include <iostream>
#include <map>
#include <cmath>
#include <unordered_map>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
ll n ; 
cin >>n ;
ll discriminant =1+(4*n*2);
ll sqrt_discriminant =sqrt(discriminant );
ll ans =(sqrt_discriminant-1)/2;
cout << ans << endl ;
return 0 ;

}
