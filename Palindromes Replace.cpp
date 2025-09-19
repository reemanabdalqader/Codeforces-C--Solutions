//https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A

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
int n =str.size();
int i =0;
int j = n-1 ;
while (i<=j){
    if (str[i]=='?'&& str[j]=='?'){
        str[i]=str[j]='a';
    }
    else if (str[i]=='?')str[i]=str[j];
    else if (str[j]=='?')str[j]=str[i];
    else if (str[i]!=str[j]){
        cout << -1 << endl ;
        return 0;
    }
    i++;
    j--;
}
cout << str<< endl ;


return 0 ;

}
