// https://codeforces.com/contest/139/problem/A
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
int arr [7 ];
for (int i=0;i<7 ;i++)cin >> arr[i];
int numNotReadPage=n ;
int day =0 ;
while (numNotReadPage>0){
for (int i=0 ;i<7;i++){
    numNotReadPage-=arr[i];
    day =i;
    if (numNotReadPage<=0)break ;
}
}
cout << day+1 << endl ;
return 0;
} 
