//https://codeforces.com/problemset/problem/515/A

#include <iostream>
#include <map>
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
ll a,b,s ;
cin >> a>>b>>s;
        ll ans =abs(a)+abs(b );
        if (ans<=s && (s-ans)%2==0){
            cout <<"YES";
        }else 
        cout <<"NO";
   
    return 0;
}
