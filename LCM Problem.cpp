//https://codeforces.com/problemset/problem/1389/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
int t ;
cin >> t ;
while (t-- ){
    int l ,r ;
    cin >>l>>r ;
    int x =l ;
    int y =2*l ;
    if (y<=r){
        cout << x<<" "<< y << endl; 
    } else 
    cout <<-1<<" "<<-1<<endl  ;

}
return 0;
} 
