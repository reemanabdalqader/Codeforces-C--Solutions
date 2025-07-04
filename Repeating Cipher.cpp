//https://codeforces.com/problemset/problem/1095/A
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
cin >> n ;
string s ;
cin >> s ;
int ptr =0 ;
int i =0;
string ans ="" ;
while (ptr < n){
i++ ;
ans+=s[ptr];
ptr +=i ;
}
cout << ans << endl ; 
return 0;
} 
