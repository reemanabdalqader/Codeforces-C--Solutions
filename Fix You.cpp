//https://codeforces.com/problemset/problem/1391/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
 ll t ;
 cin >> t;
 while (t--){
  ll n,m  ;
  cin >> n>>m ;
  char arr [n ][m ];
  for (int i=0;i<n ;i++){
    for (int j=0;j<m ;j++){
      cin >> arr[i][j];
    }
  }
  int counter =0; 
  for (int i=0 ; i<n-1;i++){
    if (arr[i][m-1]=='R'){
      counter++ ;
 
    }
  }
  for (int i=0;i<m-1;i++){
    if(arr[n-1][i]=='D')
    counter++;
  }
  cout <<counter<<endl ;
 }
return 0;
}

