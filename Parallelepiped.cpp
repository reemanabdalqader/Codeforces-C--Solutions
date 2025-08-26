//https://codeforces.com/problemset/problem/224/A
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

    ll s1,s2,s3 ;
    if (!(cin >>s1>>s2>>s3))return 0;
    ll ans =s1*s2*s3 ;
    ll pr=sqrt(ans);
    ll a =pr/s1 ;
    ll b =pr/s2 ;
    ll c =pr/s3;
    cout <<4*(a+b+c ) << endl ;
    return 0;
}
//anther solution 

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
 
    ll s1,s2,s3 ;
    if (!(cin >>s1>>s2>>s3))return 0;
    ll a =sqrt((s1*s2)/s3);
    ll b =sqrt((s1*s3)/s2);
    ll c =sqrt((s2*s3)/s1);
    cout << 4*(a+b+c)<< endl ;
    return 0;
}
