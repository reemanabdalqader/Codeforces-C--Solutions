//https://codeforces.com/problemset/problem/1278/A
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
cin >> t ;
while (t-- ){
  string p ;
  string h ;
  cin >> p >> h ;

  if (p.size() >h.size ()){
    cout << "NO"<<endl ;
    continue ;
  }

  int arrp [26]{0};
  int arrh [26]{0};

  for (char c:p ){
    arrp[c-'a']++;
  }
  
 int window = p.size();
 for (int i=0;i<window;i++){
  char c =h[i];
  arrh[c-'a']++;
 }

  bool test= equal(arrp, arrp + 26, arrh) ;
  
  for (int i=window;i<h.size() && !test ;i++){
    char c=h[i];
    arrh[c-'a']++;
    c=h[i-window ];
    arrh[c-'a']--;
    if (equal(arrp, arrp + 26, arrh))test=true ;
  }
  cout << (test ? "YES":"NO");
  cout << endl ;
}

return 0;
}
