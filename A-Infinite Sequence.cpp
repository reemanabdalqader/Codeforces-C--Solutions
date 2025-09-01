//https://codeforces.com/contest/675/problem/A

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
ll a,b,c ;
cin >> a>>b>>c ;
if (c==0){
    if (a==b)
    cout <<"YES";
   else 
   cout <<"NO";
}else {
    if ((b-a)/c>=0 && (b-a)%c==0)
    cout <<"YES";
    else 
    cout <<"NO";
}
    return 0;
}
