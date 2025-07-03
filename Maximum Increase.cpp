//https://codeforces.com/problemset/problem/702/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
int n ;
cin >>n ; 
int arr [n];
for (int i =0 ;i<n ;i++)
cin >> arr[i];
int maximum =1;
int subarray =1 ;
int pre =arr[0];
for (int i=1;i<n ;i++){
if (arr[i]> pre){
   subarray++;
   pre =arr[i ];
}else {
   pre =arr[i];
   maximum =max(maximum,subarray);
   subarray=1;
}
}
maximum =max(maximum,subarray);
cout << maximum << endl  ; 
return 0;
} 
