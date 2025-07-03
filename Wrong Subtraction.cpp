//https://codeforces.com/problemset/problem/977/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
int n , k  ; 
cin >> n >> k  ;
for (int i=0; i<k;i++){
   int dig = n %10 ; 

 if (dig !=0)n-- ;
 else {
   n/=10;
 }
}
cout <<n ;
return 0;
} 
