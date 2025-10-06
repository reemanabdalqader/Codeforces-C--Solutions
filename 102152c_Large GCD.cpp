//https://codeforces.com/gym/102152/problem/C

#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
using namespace std;
#define ll long long
bool isodd (int x ){
    if (x%2==0)return false ;
    else 
    return true  ;
}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr); 
int t ;
cin >> t ;
while (t--){
    int n,m ;
    cin >> n>> m ;
    if (isodd(n)&&isodd(m)){
        cout << 12<<endl ;

    }else {
        cout << 2<< endl ;
    }
}
return 0;

}

