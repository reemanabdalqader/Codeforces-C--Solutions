//https://codeforces.com/problemset/problem/1260/A

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
    ll c , sum ;
    cin >> c >> sum ;
    vector<ll > vec (c,0);
    ll num =0 ;
    while (sum--){
        vec[num]++;
        num ++;
        if (num==c )num=0 ;
        
    }
    ll ans =0;
    for (int i=0;i<c ;i++){
ans +=pow(vec [i],2);
    }
cout << ans << endl ;
}
return 0;

}
// anther solution 
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
    ll c , sum ;
    cin >> c >> sum ;
    ll q = sum /c ;
    ll x =sum %c ;
    ll ans = pow (q+1,2)*x + pow (q,2)*(c-x);
    cout << ans << endl ;
}
return 0;

}
