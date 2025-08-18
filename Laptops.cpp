//https://codeforces.com/problemset/problem/456/A
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
int n;
cin >> n;
vector <pair< ll ,ll>>laptop(n);
for (int i=0;i<n ;i++){cin>>laptop[i].first>>laptop[i].second;}
//ترتيب القيم حسب السعر 
sort(laptop.begin(),laptop.end());
for (int i=1;i<n ;i++){
if (laptop [i].second<laptop[i-1].second){
  cout <<"Happy Alex"<<endl ;
  return 0;

}
}
cout <<"Poor Alex"<<endl;
return 0;
}
