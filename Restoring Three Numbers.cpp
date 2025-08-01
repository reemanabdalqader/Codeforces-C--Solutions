//https://codeforces.com/problemset/problem/1154/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
ll  arr[4];
cin >> arr[0] >> arr[1]>> arr[2]>> arr[3];
int max =0 ;
int index =0 ;
for (int i=0;i<4 ;i++){
  if (max<arr[i]){
    index =i ;
    max =arr[i];
  }
}

vector <int > vec ;
for (int i=0;i<4 ;i++){
  if (i!=index){
    int ans =max-arr[i];
    vec.push_back(ans);
  }
}
for (int c :vec ){
  cout << c<<" ";
}
return 0;
}
