//https://codeforces.com/problemset/problem/1370/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
int gcd (int a,int b){
if (b==0)return a ;
return gcd(b,a%b);
}
int main  (){
int t; cin >> t;
while (t--){
  int n ;cin >>n ;
  int a =n/2 ;
  int b =a*2;
 cout << gcd (a,b )<<endl ;
}
 return 0; 
} 
