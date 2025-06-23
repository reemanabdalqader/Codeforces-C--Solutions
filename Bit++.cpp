//https://codeforces.com/problemset/problem/282/A
// Description:
// The Bit++ language has one variable `x`, starting from 0. Each instruction either
// increases (++) or decreases (--) the value of x. This program executes a list of
// such instructions and prints the final value of x.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
int main  (){
int t ;
cin >> t;
string s[t];
for (int i=0;i<t;i++){
cin >> s[i];
}
int count =0;
for (int i=0;i<t ;i++){
    string a =s[i];
    if (a[0]=='+'||a[1]=='+')
    count ++;
    else 
    count --;
}
cout << count ;
 return 0; 
} 
