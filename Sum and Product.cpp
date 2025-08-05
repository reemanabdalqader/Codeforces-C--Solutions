//https://codeforces.com/problemset/problem/1857/F
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#include<iomanip>
#define ll long long 
using namespace std;
bool is_square (ll d ){
  if (d<0)return 0;
  ll seq =sqrt(d);
  return seq*seq ==d ;
}
int main  () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t ;
  cin >> t;
  while (t--){
 int n ;
 cin>> n;
 vector <ll>a(n);
 map<ll,ll >freq;
freq.clear();
 for (int i=0;i<n ;i++){
  cin >> a[i];
  freq[a[i]]++;
 }

 int  q;
 cin >> q;
 while (q--){
  ll x,y;
  cin >>x>>y;
  ll d= x*x -4*y ;// المميز 
  if(d<0 ||!is_square(d) ){
    cout <<0 <<" " ;
    continue;
  }

  ll sqr=sqrt(d);
  ll ans1=(x-sqr)/2;
  ll ans2=(x+sqr)/2;
 
 if ((x-sqr)%2!=0 ||(x+sqr)%2!=0 ){
  cout <<0 <<" " ;
    continue;
 }
 if (ans1+ans2!=x || ans1*ans2!=y ){
    cout << 0 << " ";
    continue;
}
ll res=0;
if (ans1==ans2){
  ll count =freq[ans1];
  res=count *(count-1)/2;
}else{
  res=freq[ans1]*freq[ans2];

} 
cout<<res<<" ";

 }
 cout << endl ;
}
 
return 0;
}
