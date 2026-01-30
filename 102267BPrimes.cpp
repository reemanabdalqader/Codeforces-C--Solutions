//https://codeforces.com/problemset/gymProblem/102267/B
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
  int n ;
  cin >> n ;
 if (n>2 ){
 int  x=n-2;
 bool isprime =true ;
  for (int i=2;i*i<=x ;i++){
    if (x%i==0){
      isprime =false ;
      break ;
  }
}
if (isprime ==true )
cout << 2<<" "<<x ;
else cout<< -1 ;
 }
 else cout<< -1 ;
 return 0;
  }
//--------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; 1LL * i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;

    if (n > 2 && isPrime(n - 2))
        cout << 2 << " " << n - 2;
    else
        cout << -1;

    return 0;
}
