//https://codeforces.com/problemset/problem/1300/B
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
  ll n ;
  cin >> n ;
  int x =2*n ;
  int arr[x]; 
 
  for (int i=0;i<x;i++){
    cin >> arr[i];
  }
  sort(arr,arr+x);
  int a =arr[x/2];
  int b = arr [x/2-1];
  cout << a-b << endl  ;
 }
return 0;
}
