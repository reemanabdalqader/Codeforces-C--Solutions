//https://codeforces.com/problemset/problem/1433/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
void solve(){
string n  ;
cin >>n   ;
int s = n[0]-'0';
ll ans =(s-1)*10;
int size =n.size();
for (int i=1;i<=size ;i++){
ans+=i;
}
cout << ans << endl ;
}
int main() {
int c;
cin >> c; 
while (c--){
  solve ();
}
  return 0; 
}
