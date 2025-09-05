//https://codeforces.com/contest/552/problem/B

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
ll ans =0 ;
if (n<=9){
    cout << n ;
    return 0;
}
n-=9;
ans+=9;
ll i=2;
ll start =10 ;
while (true ){
ll block =start*9 ;
if (n-block>=0){
    ans+=(block*i);
    n-=block;
    start*=10 ;
}else {
    ans +=(n*i);
    cout << ans ; 
    return 0;
}
i++;
}

    return 0;
}

