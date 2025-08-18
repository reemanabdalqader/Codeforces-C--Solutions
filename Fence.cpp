//https://codeforces.com/problemset/problem/363/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#include<iomanip>
#include<unordered_map>
#define ll long long 
using namespace std;

int main  () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n ;cin >> n; 
  ll k ;cin>> k;
  ll arr  [n ];
  for (ll i=0;i<n ;i++){cin >> arr [i];}
 
  //create the silding windows 
  int sum_windows=0;
  int startindex=0;
  for (int i=0;i<k;i++){sum_windows+=arr[i];}
  // find the min sum 
  int min_sum=sum_windows;
  int minindex=0 ;
  for (ll i=k;i<n ;i++){
    sum_windows-=arr[startindex];
    startindex++;
    sum_windows+=arr[i];
    if (sum_windows<min_sum){
      min_sum=sum_windows;
      minindex=startindex;
    }
  }
  cout << minindex+1<<endl ;

return 0;
}
