//https://codeforces.com/problemset/problem/1303/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
int t ; 
cin >> t ; 
while (t-- ){
string s ; 
cin >> s ; 
int n = s.size ();
int ptr1 =0;
int ptr2 =n-1 ;
while (ptr1 <n && s[ptr1]=='0'){
      ptr1++ ;
   }
while (ptr2 >= 0 && s[ptr2] != '1') 
ptr2--;

int minum = 0;
for (int i = ptr1; i <= ptr2; i++) {
    if (s[i] == '0') minum++;
}
cout <<minum<< endl  ;
}
return 0;
} 
