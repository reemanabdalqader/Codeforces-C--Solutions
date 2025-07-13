https://codeforces.com/contest/2117/problem/A//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
 ll t ;
 cin >> t;
 while (t--){
  int n , x ;
  cin >> n>> x ;
  int arr [n ];
  for (int i=0;i<n ;i++)cin >> arr[i];
  bool button =false ;
  int timerAfterPass =0 ;
  bool end =false ;
  for (int i=0;i<n ;i++){
    if (arr[i]==1){
      if (button ==false ){
        button =true ;
        timerAfterPass++;
      }else if (button==true && timerAfterPass<x){
        timerAfterPass++;
      }
      else {
        cout<<"NO"<<endl ;
        end =true ;

        break;
      } 
    }else {
       if (button ==true ){
        timerAfterPass++;
       }
    }
  }
  if (end==false ){
    cout <<"YES"<< endl ;
  }
 }

return 0;
}
