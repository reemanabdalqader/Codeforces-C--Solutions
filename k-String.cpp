//https://codeforces.com/problemset/problem/219/A

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
 string str ;
 cin >> str ;
int arr[26]{0};
for (int i=0;i<str.size();i++){
  char ch =str[i];
  int index= ch-'a';
  arr[index]++;

}
string s ="";
for (int i=0;i<26;i++){
  if (arr[i]%n==0){
    for(int c=0;c<arr[i]/n;c++)
    s+= (char)('a'+i);
  }else {
    cout << -1 <<endl ;
    return 0; 
  }}
  string res="";
for (int i=1;i<=n;i++){
  res+=s;
}
cout <<res<<endl ;
return 0;
}
