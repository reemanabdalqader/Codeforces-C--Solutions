//https://codeforces.com/problemset/problem/1027/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
int t ;
cin >>t ;
while (t-- ){
  int n ;
  string s ;
  cin >>n >> s ;
  int left =0;
  int right =s.size()-1;
  bool test =true ;
  while (left<=right ){
    char leftchar =s[left ];
    char rigitchar =s[right ];
    int ans =abs(leftchar-rigitchar);
    if(ans != 0 && ans !=2 ){
      test=false ;
      break ;
    }
    left++;
    right --;
  }
  if (test)
  cout <<"YES"<<endl ;
  else 
  cout << "NO"<<endl  ;
}
return 0;
}
