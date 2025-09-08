//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
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
ll n ,q;
cin >> n >>q;
ll arr[n];
for (ll i=0;i<n ;i++)cin>>arr[i];
sort(arr, arr + n);
 
while (q--){
    ll f;
    cin >> f;
    ll left = 0;
    ll right = n-1;
    bool test =false ;
 
    while(left<=right ){
       ll mid = left+(right-left)/2 ;
       if (arr[mid ] ==f){
        cout << "found"<<endl ;
        test =true  ;
        break ;
       }
       else if (arr[mid ]<f ){
        left =mid +1;
       }
       else 
       right =mid -1; 
    }
    if (test ==false ){
        cout << "not found"<<endl ;
    }
}
   return 0;
}
