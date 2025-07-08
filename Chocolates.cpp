https://codeforces.com/problemset/problem/1139/B//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
ll n ; 
cin >> n ;
ll arr [n ];
for (int i=0;i<n ;i++)cin >> arr[i ];
 ll test =arr[n-1 ]; 
 ll i =n-1 ;
 ll allchoc=test ;
while (i>0 && test>0 ){
    i-- ;
    test = min(arr[i],test-1);
    allchoc+=test;
}
cout <<allchoc<<endl ;
return 0;
} 
