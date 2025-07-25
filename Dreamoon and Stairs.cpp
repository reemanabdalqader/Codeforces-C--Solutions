//https://codeforces.com/problemset/problem/476/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
int n,m ;
cin >> n >> m ;
int step =n/2;
if (n%2 !=0 )step++;
while (step <= n ){
  if (step%m == 0){
    cout << step ;
    return 0;

  }
  step++;
}
cout << -1 << endl ;

return 0;
}
