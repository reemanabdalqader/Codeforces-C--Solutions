// link :https://codeforces.com/problemset/problem/381/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
int main() {
int n ;
cin >>n ;
int arr [n ];
for (int i=0;i<n ;i++){
  cin >> arr[i];
}
int start =0;
int end =n-1 ;
ll serajtotal =0;
ll dimatotal =0;
int s=0;
while (start<=end ){
  s++;
int f =0;
if (start==end ){
  f=arr[start ];
  start++;
 
}
 
else if (arr[start]>arr[end ]){
  f=arr[start ];
  start++ ;
 
}
else {
  f=arr[end ];
  end--;
 
}
if (s%2!=0 ){
  serajtotal+=f ;
 
}else 
dimatotal+=f; 
}
cout << serajtotal<<" "<<dimatotal<<endl ;
  return 0; 
} 
