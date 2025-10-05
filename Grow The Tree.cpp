https://codeforces.com/problemset/problem/1248/B//

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
int n ; cin >> n ;
vector<ll > arr (n);
for (int i =0;i<n ;i++)cin >> arr[i];
sort (arr.begin(), arr.end());
ll x =0 ;
ll y=0;
ll start =0;
bool horiz=true ;
ll end = arr.size()-1;
while ( start <=end ){
    if (horiz){
x +=arr[end];
end -- ;
horiz=false ;
    }else {
        y+=arr[start ];
        start ++;
        horiz=true  ;
    }
}
ll ans =(x*x)+(y*y);
cout << ans << endl ;

return 0;

}
