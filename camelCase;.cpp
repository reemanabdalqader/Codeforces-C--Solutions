//https://codeforces.com/gym/102152/problem/F

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
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr); 
int t ;
cin >> t ;
while (t--){
    string s ;
    cin >> s ;
    int x =0;
    for (char a :s){
        if (isupper(a))
        x++;
    }
    if (x+1<=7){
        cout <<"YES"<<endl ;

    }
    else 
    cout << "NO"<< endl ;
}
return 0;

}
