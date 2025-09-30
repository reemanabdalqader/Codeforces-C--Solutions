//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S

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
string str ;
cin >> str ;
int l =0;
int r =0;
int n =str.size();
vector <string > vec ;
for (int i=0;i<n ;i++){
if (str[i]=='R')r++;
if (str[i]=='L')l++;
if (r==l){
    int length = r + l;
    vec.push_back(str.substr(i+1-length,length)) ;
    r=0;
    l=0;
}
}
cout << vec.size()<<endl ;
for (string s:vec){
    cout << s << endl ;
}
return 0;

}
