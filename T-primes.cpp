//https://codeforces.com/problemset/problem/230/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#include<iomanip>
#define ll long long 
using namespace std;
int main  () {
int n ;
cin >>n;
vector<ll> arr(n);
// ادخال من المستخدم 
for (int i=0;i<n ;i++){
  cin >> arr[i];
}
int MAX =1e6;
vector<bool>is_prime (MAX+1,true );
is_prime[0]=is_prime[1]=false ;
for (int i=2;i*i<=MAX;i++){
  if (is_prime[i]){
    for(int j=i*i;j<MAX;j+=i){
      is_prime[j]=false ;
    }
  }
}

set<ll>t_prime ;
for(int i=2;i<MAX;i++){
  if (is_prime[i]){
    t_prime.insert(1ll*i*i);
  }
}
for (int i=0;i<n ;i++){
  if (t_prime.count(arr[i])){
    cout <<"YES"<<endl ;
  }else {
    cout <<"NO"<<endl ;
  }
}
return 0;
}
