https://codeforces.com/problemset/problem/271/A//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
bool solve(int year){
string y =to_string(year );
set <char> sett ;
for (char s :y){
  sett.insert(s);
}
return (sett.size()==y.size());
}
int main  () {
int year ;
cin >> year;
while (true ){
  year++;
  if (solve(year)){
    cout << year << endl ;
    break ;
  }
}
return 0;
}
