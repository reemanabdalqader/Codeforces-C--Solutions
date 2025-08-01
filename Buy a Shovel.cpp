//https://codeforces.com/problemset/problem/732/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
ll k,r ;
cin >> k>>r ;
ll ans =1;
ll price =k;
while (price % 10 != 0 && price % 10 != r){
ans ++;
price =ans *k ;
}
cout << ans << endl  ;
return 0;
}

