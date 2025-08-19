//https://codeforces.com/problemset/problem/742/A
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
  ll n ;
  cin >>n ;
  if (n==0){
    cout << 1<< endl ;
    return 0;
  }
  int arr [4]={6,8,4,2};
 cout << arr[n%4];

return 0;
}
