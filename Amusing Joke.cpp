//https://codeforces.com/problemset/problem/141/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
string h1 ,h2 ,total ;
cin >>h1>>h2>> total;
map<char,int > test1 ;
map <char,int >test2 ;
for (char c:h1)test1[c]++;
for (char c:h2)test1[c]++;
for (char c:total)test2[c]++;
if (test1 == test2){
  cout << "YES"<<endl ;

}else 
cout <<"NO"<<endl ;
return 0;
}
