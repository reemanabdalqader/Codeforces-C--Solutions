//https://codeforces.com/problemset/problem/270/A

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
ll t ;
cin >> t; 
while (t--){
    int n;
    cin >> n;
    if (360 %(180 -n)==0)
    cout <<"YES"<< endl ;
    else 
    cout <<"NO"<<endl ;
}
    return 0;
}

