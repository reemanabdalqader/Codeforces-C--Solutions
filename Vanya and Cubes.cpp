//https://codeforces.com/problemset/problem/492/A
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
int level=0 ;
int total =0;
for (int i =1;; i++){
    int need = i*(i+1)/2;
    total+=need ;
    if (total> n )break  ;
    level ++;
}
cout << level ;


return 0;
} 
