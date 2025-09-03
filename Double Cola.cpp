//https://codeforces.com/contest/82/problem/A
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
cin >>n ;
string arr []={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
ll level =0;
ll total =0;
while (true ){
    ll size =5*(1ll<<level );
    if (n<=total +size )break ;
    level++;
    total +=size;
}
ll levelgroup =1ll<<level ;
ll k =n-total-1;
ll ans =k/levelgroup;
cout <<arr[ans];
    return 0;
}
