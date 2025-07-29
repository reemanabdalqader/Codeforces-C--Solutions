//https://codeforces.com/problemset/problem/96/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
string s ;
cin >> s ;
int pre=s[0];
int num =1;
int i=1;
while (i<s.size()){
  if (s[i]==pre){
    num++;
  }else {
    num =1;
    pre =s[i];
  }
  if (num>=7){
    cout <<"YES";
    return 0;
  }
  i++;
}
cout <<"NO";
return 0;
}
