//https://codeforces.com/problemset/problem/1722/A
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
 cin >> t; 
 while (t--){
  int n ;
  cin >> n ;
  string s;
  cin >> s;
  if (n!=5){
    cout <<"NO"<<endl ;
    continue ;
  }
    sort(s.begin(), s.end());
        if (s == "Timru")  // لأنها الترتيب الأبجدي لكلمة "Timur"
            cout << "YES\n";
        else
            cout << "NO\n";
    }
return 0;
}

