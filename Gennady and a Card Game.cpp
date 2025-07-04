https://codeforces.com/problemset/problem/1097/A//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  (){
string table ;
cin >> table ;
string arr [5];
for (int i=0 ;i<5 ;i++){
    cin >> arr[i];
}
char ch1 = table [0];
char ch2 = table [1];
for (int i=0;i<5 ;i++){
    string str = arr[i];
    char  a1=str[0];
    char  a2= str[1];
    if (a1==ch1 || a2==ch2 ){
        cout << "YES"<< endl  ;
        return 0;
    }
}
cout <<"NO"<<endl ;
return 0;
} 
