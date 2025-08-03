//https://codeforces.com/problemset/problem/200/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#include<iomanip>
#define ll long long 
using namespace std;
int main  () {
  int n ;
  cin >> n; 
  double   arr[n];
  double x ;
  for (int i=0;i<n ;i++){
cin >> arr[i];
x+=arr[i];
  }
  double c= x/n;
cout << fixed<< setprecision(12)<<c;
return 0;
}
