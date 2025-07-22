//https://codeforces.com/contest/2125/problem/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
ll t ;
cin >> t; 
while (t--){
  string s ;
  cin >> s; 
  string F="";
  string N="";
  string T="";
  string other ="";
  for (char c :s){
    if (c=='F')F+=c ;
   else if (c=='N')N+=c ;
    else if (c=='T')T+=c ;
   else 
   other+=c;
  }
  cout << T+N+F+other << endl ;
}
return 0;
}
