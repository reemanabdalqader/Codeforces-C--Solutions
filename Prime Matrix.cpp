//https://codeforces.com/problemset/problem/271/B

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
cout.tie(nullptr);
ll n ,m ;
cin >>n>>m ;
ll MAX =0;
vector<vector<ll>> arr(n, vector<ll>(m));
for (ll i=0;i<n;i++){
    for (ll j=0;j<m ;j++){
        cin >> arr[i][j];
        MAX = max(MAX, arr[i][j]);
    }
}
MAX +=100 ;
vector <bool>sieve(MAX,true);
sieve [0]=false ;
sieve [1]=false ;
for (ll i=2;i*i*1LL<MAX;i++){
    if (sieve[i]){
        for (ll v=i*i ;v<MAX;v+=i){
            sieve [v]=false ;
        }
    }
}
vector <ll > nextprime (MAX , -1 );
ll last =-1 ;
for (ll i=MAX-1;i>=0 ;i--){
if (sieve [i])last =i;
nextprime [i]=last ;
}
ll conter =LLONG_MAX;
for (ll i=0;i<n ;i++){
    ll k=0;
    for (ll j=0;j<m;j++){
        k+=nextprime[arr[i][j]]-arr[i][j];
    }
    conter =min (conter ,k);
}
for (ll j=0;j<m ;j++){
    ll k =0;
    for (ll i=0;i<n ;i++){
         k+=nextprime[arr[i][j]]-arr[i][j];
    }
     conter =min (conter ,k);
}
cout << conter  ;

    return 0;
}
