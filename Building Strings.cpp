// https://codeforces.com/gym/102152/problem/E

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
    bool test =true  ;
    int n,m ;
    cin >> n>> m ;
    string s; cin >> s ;
    string c ;cin >> c ;
    string p ;cin >> p ;
    vector <int >  arr (26,-1);
    for (int i =0;i<n ;i++){
        char a = s[i];
        int cost =c[i]-'0';
        if (arr[a-'a']==-1)arr[a-'a']=cost  ;
        else if (arr[a-'a']>cost )arr[a-'a']=cost  ;
    }
    int sumcost =0;

for (int i=0;i<m ;i++){
    char a = p[i];

   if (arr[a-'a']==-1){
    test =false ;
    break ;
   }
    sumcost+= arr[a-'a'];   
}
if (test ==false )
cout << -1<< endl ;
else 
cout << sumcost<< endl ;
}
return 0;

}
