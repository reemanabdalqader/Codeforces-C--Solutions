//https://codeforces.com/contest/841/problem/B
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
ll n ;
cin >> n; 
ll arr [n];
bool odd_num =false ;
for (int i=0;i<n ;i++){
    cin >> arr[i];
    if (arr[i]%2==1)odd_num =true ;
}
if (odd_num)
cout <<"First";
else 
cout <<  "Second";
    return 0;
}
