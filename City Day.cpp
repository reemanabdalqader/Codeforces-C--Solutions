//https://codeforces.com/problemset/problem/1199/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
int n ,x,y ;
cin >> n>>x>>y ;
int arr [n];
for (int i=0;i<n ;i++)cin >> arr[i];
for (int d=0;d<n ;d++){
 bool test =true ;
 for (int i=d-x;i<d;i++){
    if (i>=0 && arr[d]>=arr[i]){
        test=false ;
        break ;
    }}
    if (test==false )continue;
    for (int i=d+1;i<=d+y;i++){
    if (i<n && arr[d]>=arr[i]){
        test=false ;
        break ;
    }}
    if (test){
        cout <<d+1 <<endl ;
        break ;
    }
 
}

return 0;
} 
