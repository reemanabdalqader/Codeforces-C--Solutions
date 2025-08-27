//https://codeforces.com/problemset/problem/92/A

#include <iostream>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
using namespace std;
#define ll long long 
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int n ,chips ;
cin >>n >>chips;

int i=1;
while (i<=chips){
    chips-=i;
    if (i<n){
        i++;
    }else {
        i=1;
    }
}
cout << chips << endl ;
    return 0;
}
