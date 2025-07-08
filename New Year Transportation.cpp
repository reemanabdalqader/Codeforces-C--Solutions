//https://codeforces.com/problemset/problem/500/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
int n , t ;
cin >> n>> t ;
int arr [n-1 ];
for (int i=0;i<n-1;i++)cin >> arr[i];
int cell=0;
while (cell<n-1){
    cell =cell +arr[cell ];
    if (cell ==t-1){
        cout << "YES"<<endl ;
        return 0 ;
    }
}
cout <<"NO"<<endl ;

return 0;
} 
