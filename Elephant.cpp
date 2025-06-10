//https://codeforces.com/problemset/problem/617/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
int main() {
int x ;
cin >> x ;
int ans =0 ;
int mad=x  ;
for (int i=5 ;i>=1 ;i--){
ans = ans +(mad/i );
mad = mad %i ;
}
 cout << ans << endl ;
  return 0; 
} 
