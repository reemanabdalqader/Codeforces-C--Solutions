//https://codeforces.com/problemset/problem/233/A

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

    int n ;
    cin >> n;
  vector <int > vec (n);
  for (int i=1;i<=n ;i++){
    vec[i-1]=i;
  }
  if (n %2!=0){
    cout << -1<< endl ;
    return 0;
  }
  for (int i=0;i<n ;i+=2){
int swap =vec[i];
vec[i]=vec[i+1];
vec[i+1]=swap ;
  }
  for (int i:vec ){
    cout << i<<" ";
  }
    return 0;
}
