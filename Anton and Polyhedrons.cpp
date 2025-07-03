//https://codeforces.com/problemset/problem/785/A
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
string arr [n ];
for (int i=0;i<n ;i++)cin >>arr[i];
map <string ,int >mymap ;
mymap.insert(pair<string ,int >("Tetrahedron",4));
mymap.insert(pair<string ,int >("Cube",6));
mymap.insert(pair<string ,int >("Octahedron",8));
mymap.insert(pair<string ,int >("Dodecahedron",12));
mymap.insert(pair<string ,int >("Icosahedron",20));
int sum =0;
for (int i=0;i<n ;i++){
   sum+= mymap[arr[i]];
}
cout <<sum <<endl ;
 return 0; 
} 
