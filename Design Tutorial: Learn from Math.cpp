//https://codeforces.com/problemset/problem/472/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#include<iomanip>
#define ll long long 
bool comp(int n ){
    if (n <= 3) return false;
  for (int i=2;i*i<=n ;i++){
    if (n%i==0){
      return true ;
    }
  }
  return false;
}
using namespace std;
int main  () {
 int n ;
 cin >> n ;
 for (int i=4;i<n-4;i++){
  int s=n-i;
  if (comp(s)&& comp(i)){
    cout << i<< " "<<s<< endl ;
    return 0;
  }
 }
 
return 0;
}
