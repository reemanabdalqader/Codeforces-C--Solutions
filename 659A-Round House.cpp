//https://codeforces.com/contest/659/problem/A
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
int n ,a,b;
cin>> n>>a>>b ;
int pos =(a-1+b)%n;
if (pos <0){
    pos+=n ;
}
pos+=1;
cout <<pos <<endl ;

    return 0;
}
