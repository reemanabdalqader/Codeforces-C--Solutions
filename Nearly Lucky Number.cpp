//https://codeforces.com/problemset/problem/110/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
string str ;
cin>>str  ;
int n =str.size ();
int num =0;
for (int i=0;i<n ;i++){
if (str[i]=='7'|| str[i]=='4'){
    num++;
}} 
if (num ==0 ){
   cout <<  "NO "<< endl ;
   return 0 ;
}

while (num>0){
   int dig = num %10 ;
   num/=10 ;
   if (dig !=7 && dig !=4){
      cout <<"NO"<<endl ;
      return 0 ;
   }
}
cout <<"YES"<<endl ;
return 0;
} 
