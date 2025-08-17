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
  int x ;
  cin >> x ;
  int res=0 ;
  while (x>0){
    if (x%2== 1){
      res++;
    }
    x/=2;
  }
  cout << res <<endl ;
}
// onther solution 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() {
    int x;
    cin >> x;
    int ans = __builtin_popcount(x); // دالة جاهزة تعد الـ 1s بالباينري
    cout << ans << endl;
}
