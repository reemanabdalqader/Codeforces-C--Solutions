//https://codeforces.com/problemset/problem/1141/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
 ll n , m ;
 cin >>n >>m ;
 if (m%n!=0)
 cout << -1 <<endl ;
 else{
  ll k =m/n ;
  ll step =0 ;
  while (k%2==0){
    step++;
    k/=2 ;
  }
   while (k%3==0){
    step++;
    k/=3 ;
  }
  if(k==1)
  cout <<step <<endl ;
  else 
  cout << -1 <<endl ;
 }
return 0;
}
