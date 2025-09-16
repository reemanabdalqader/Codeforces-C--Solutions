//https://codeforces.com/problemset/problem/1266/A
// 60 =4*3*5 
#include <iostream>
#include <map>
#include <cmath>
#include <unordered_map>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n ;
cin >> n ;
while (n--){
string str ;
cin >> str  ;
bool countzero =false ;
bool counteven = false ;
ll sum =0;
int len =str.size ();
for (int i=0;i<len ;i++){
    int ch =str[i]-'0';
    if (ch ==0 && !countzero )countzero =true;
    else if  (ch%2 ==0)counteven=true ;
    sum +=ch; 
}
if (countzero && counteven && sum%3 ==0)
cout <<"red"<<endl ;
else 
cout << "cyan"<<endl ;
}
return 0 ;

}
