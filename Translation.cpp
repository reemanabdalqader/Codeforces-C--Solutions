//https://codeforces.com/problemset/problem/41/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
string s, t;
cin >> s >>t ;
if (s.size()!=t.size()){
  cout << "NO";
  return 0 ;
}
int start =0;
int end =s.size()-1;
while (start<s.size()){
 if( s[start]!=t[end]){
   cout << "NO";
  return 0 ;
 }
 start++;
 end--;
 
}
cout <<"YES";
return 0;
}
