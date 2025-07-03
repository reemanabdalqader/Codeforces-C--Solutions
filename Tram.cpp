//https://codeforces.com/problemset/problem/116/A
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
cin >> n ;
pair<int ,int > arr[n];
for (int i =0;i< n;i++){
   cin >> arr[i].first >> arr[i].second;
}
int passengers =0 ;
int capasity =0 ;

for (int i =0;i< n;i++){
   passengers-=arr[i].first;
   passengers+=arr[i].second;
   capasity =max(capasity , passengers );
}
cout << capasity << endl  ;

return 0;
} 
