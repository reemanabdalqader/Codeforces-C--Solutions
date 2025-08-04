//https://codeforces.com/problemset/problem/2114/B
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
int t ;
cin >> t ;
while (t--){
  int n,k;
  cin >> n>>k ;
  string s ;
  cin>>s ;
  int  z=0,o=0;
  for (int i=0;i<n;i++){
    if (s[i]=='0')z++;
    else o++;
  }
int tk=0,low=1,hight=n;
while  (tk<k){
if (z>=o)z-=2;
else o-=2;
tk++;
low++;
hight--;
}

while (low<hight){
  o--;
  z--;
  low++;
  hight --;
}

if (low == hight ){
  if (z>=o)z--;
  else o--;
}
if (o<0 || z<0){
  cout <<"NO"<<endl ;
}else 
cout <<"YES"<<endl ;
}
return 0;
}
