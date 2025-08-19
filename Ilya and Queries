//https://codeforces.com/problemset/problem/313/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#include<iomanip>
#include<unordered_map>
#define ll long long 
using namespace std;

int main  () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string str ;
  cin >> str ;

ll prefixsum[str.size()];
prefixsum [0]=0;
for (int i=1;i<str.size() ;i++){
  prefixsum[i]=prefixsum[i-1];
  if (str[i]==str[i-1])
  prefixsum [i]++;
}
ll n;
cin >> n;
while (n--){
 ll a ,b ;
 cin >>a>>b ;
 a--;
 b-- ;

 cout << prefixsum[b]-prefixsum[a]<< endl ;
}
return 0;
}
