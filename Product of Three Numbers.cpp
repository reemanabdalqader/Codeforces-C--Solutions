// https://codeforces.com/contest/1294/problem/C
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
void solve (){
ll  n ;cin >>n ;
ll a =-1, b=-1, c=-1 ;
for (int i=2;i*i <=n ;i++){
  if( n%i==0){
    a=i;
    b=n/i;
    break ;
   } }
   if (a==-1){
    cout << "NO"<<endl ;
    return  ;
   }

for (int i=a+1;i*i <=n ;i++){
  if( b%i==0){
    b=i ;
    c=n/(a*b);
    break ;
   } 
}
if (b != -1 && c != -1 && a != b && b != c && a != c && c > 1) {
 cout << "YES"<<endl <<a<<" "<<b<<" "<< c <<endl ;
}else {
   cout << "NO"<<endl ;
}
}
int main() {
ll t ;cin >>t ;
while (t--){
  solve ();
}
  return 0; 
} 
