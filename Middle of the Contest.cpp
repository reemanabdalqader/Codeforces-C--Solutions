//https://codeforces.com/problemset/problem/1133/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
int h1,m1;
int h2,m2 ;
char a  ;
cin >> h1>>a >>m1 ;
cin >>h2>>a>>m2 ;
int start =h1*60 + m1 ;
int end =h2*60 + m2 ;
int all =end-start ;
int ans =all/2+start ;
int h3 =ans/60 ;
int m3=ans %60 ;
if (h3<10){
  cout <<0<<h3 ;
}else 
cout <<h3 ;
cout <<':';
if (m3 <10)
cout << 0<< m3 ;
else cout <<m3 ;


return 0;
}
