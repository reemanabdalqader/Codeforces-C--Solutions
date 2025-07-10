//https://codeforces.com/problemset/problem/268/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
   int n ;
   cin >>n ;
   int ans =n ;
   for (int i=1;i<n ;i++){
    ans=ans +(n-i)+(n-(i+1))*i;
   }
   cout << ans ;
   
return 0;
} 
