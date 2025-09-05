//https://codeforces.com/contest/2121/problem/A
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
int t ;
cin >> t;
while (t-- ){ 
int n ,s;
cin>> n>>s ;
vector <int >vec (n);
for (int i=0;i<n ;i++){
    cin>> vec [i];
}
int left =vec[0];
int right =vec [n-1];
if (s<=left ){
    cout << right -s<< endl ;
}
else if (s>=right ){
    cout << s-left<<endl ;
}
else 
cout << right -left +min(s-left ,right -s)<<endl ;
}
   return 0;
}
