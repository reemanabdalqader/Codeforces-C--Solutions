//https://codeforces.com/problemset/problem/483/A

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
ll r,l;
cin >> l>>r ;
if (r-l <2){
    cout <<  -1 << endl ;
    return 0 ;
}
ll a = (l%2 == 0)?l:l+1 ;
if (a+2<=r){
    cout << a<<" "<<a+1<<" "<<a+2 ;
}else 
cout << -1<< endl ;

   return 0;
}
