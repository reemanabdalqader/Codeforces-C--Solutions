//https://codeforces.com/contest/514/problem/A
→ SourceCopy
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
int main() {
string s ; cin >> s; 
for (int i=0;i<s.size();i++){
  int z=s[i]-'0';
  int z_ =9-z;
  if (i==0&&z_==0)continue;
  if (z_<z)
  s[i]=z_ +'0';
}
cout << s;
  return 0; 
}
