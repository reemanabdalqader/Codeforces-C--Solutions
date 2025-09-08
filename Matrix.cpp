//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
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
cin >> n;
ll arr[n][n];
for (ll i=0;i<n ;i++){
    for (ll j=0;j<n ;j++)
    cin >>arr[i][j];
}
ll main_diagonal=0 ;
for (int i=0;i<n ;i++){
main_diagonal += arr[i][i];
}
ll secondary_diagonal =0;
for (int i=0;i<n ;i++){
secondary_diagonal +=arr[i][n-i-1];
}
ll ans =abs (main_diagonal -secondary_diagonal);
cout << ans << endl ;
   return 0;
}
