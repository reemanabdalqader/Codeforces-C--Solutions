//https://codeforces.com/problemset/problem/1999/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
int main() {
int t ; cin >> t ;
while (t--){
  int n ; cin >>n ;
  int dig1 =n%10 ;
  n/=10;
  int dig2 =n%10 ;
  cout << dig1+dig2 << endl  ;
}
  return 0; 
} 
