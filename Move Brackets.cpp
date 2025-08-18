//https://codeforces.com/problemset/problem/1374/C
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#include<iomanip>
#include<unordered_map>
#define ll long long 
using namespace std;

int main  () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
int t ;
cin >> t; 
while (t--){
  int n ;
  string s ;
  cin >> n>> s ;
  int balance=0;int mn =0;
for (char c: s){
  if (c==')')balance--;
  else balance++;
  mn =min (balance ,mn );
}
cout <<abs(mn)<<endl ;
}
return 0;
}
