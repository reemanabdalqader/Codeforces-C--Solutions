//https://codeforces.com/problemset/problem/158/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
int main() {
int n , c;
cin >> n >>c ;
c--;// لتحويل الفرسة للبدء من index 0
int arr [n ];
for (int i=0;i<n ;i++)cin >> arr [i];
int count =0;
for (int i=0;i<n ;i++){
  if (arr[i]>=arr[c]&& arr[i]!= 0)
  count ++;
}
cout << count << endl ;
  return 0; 
} 
