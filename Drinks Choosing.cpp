//https://codeforces.com/problemset/problem/1195/A

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
int n , k ;
cin >> n >> k ;
vector < int > arr(n) ;
for (int i=0;i<n ;i++){
    cin>> arr[i];
}
int all_box =0;
if (n %2==0){
    all_box =n/2 ;
}else 
all_box=n/2+1 ;
int box =0;
sort(arr.begin(),arr.end());
int start =0;
int end =0;
int drink=arr[0];
int rem=0;
while (end < n){
    if (arr[end ]== drink)
    end++;
    else {
        int range =end -start ;
        int box1=range/2 ;
        box+=box1 ;
        rem+=(range%2);
        start =end ;
        drink= arr[end];
        end ++;
    }
}
        int range =end -start ;
        int box1=range/2 ;
        box+=box1 ;
        rem+=(range%2);
        int num =all_box-box;
        rem-=num ;
        n-=rem;
        cout << n << endl ;
return 0;

}
