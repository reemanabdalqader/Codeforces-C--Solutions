//https://codeforces.com/problemset/problem/750/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#include<iomanip>
#define ll long long 
using namespace std;
int main  () {
int n ,k;
cin >> n>>k ;
int total_min=240-k;
int i=1;
int numofqes=0;
while (total_min>0 && total_min>=(i*5) && numofqes<n ){
  if (total_min-(i*5)>=0){
    total_min-=(i*5);
    i++;
    numofqes++;
  }
}
cout <<numofqes<<endl ;
return 0;
}

