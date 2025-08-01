//https://codeforces.com/problemset/problem/1343/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
ll t ;
cin >> t ;
while (t--){
ll n ;
cin >>n ;
int half =n/2 ;
if (half %2!=0){
  cout << "NO"<<endl ;
  continue ;
}
int sum_even =0;
int sum_odd =0 ;
vector <int> vec  ;
cout <<"YES"<<endl ;
for (int i=1;i<=half;i++){
  vec.push_back(2*i);
  sum_even += 2 * i;
}
for (int i=0;i<half-1;i++){
     int odd = 2 * i + 1;
     vec.push_back(odd);
     sum_odd += odd;
}
 int last_number = sum_even - sum_odd;
 vec.push_back(last_number);
 for (int c:vec){
  cout <<c<<" ";
 }
 cout << endl ;
}
return 0;
}
