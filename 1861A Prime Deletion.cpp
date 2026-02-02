//https://codeforces.com/problemset/problem/1861/A
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr); 
ll max =3000;

vector <bool> prime (max+1 ,true );
prime [0]=false ;
prime [1]= false ;
for (int i=2;i*i<max ;i++){
if (prime [i]){
  for (int j=i*i ;j<=max ;j+=i){
    prime [j]=false ;
  }
}
}

  int t ;
  cin >> t; 
  while (t--){
  string str ;
  cin >> str ;
  vector <int > vec ;
  for (char i: str){
    vec.push_back (i-'0');
  }
  int ans =-1 ;
  bool t =false ;
  for(int i=0 ;i<9 ;i++){
    for (int j=i+1 ;j<9 ;j++){
      int num =vec[i]*10 +vec[j];
      if (prime [num ]){
        ans =num ;
        t =true ;
        break ;
      }
    }
    if (!t){
      break ;
    }
  }
cout << ans << endl ;}
 return 0;
  }
