//https://codeforces.com/problemset/problem/109/A
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
 ll maxY=n/7 ;
 ll y=0;
 ll x=0;
 for (int i=maxY; i>=0;i--){
    int res = n- (i*7);
    if (res%4==0 ){
        y=i;
        x=res/4 ;
        break ;

    }
 }
if (4 * x + 7 * y != n) {
    cout << -1 << endl;
    return 0;
}
 string s ="";
 int v =0 ;
while (x>0){
s+='4' ;
x-- ;
}
while (y>0){
s+='7';
y-- ;
}
cout << s << endl ;
return 0;
} 
