//https://codeforces.com/problemset/problem/110/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
int main  (){
int t ; 
cin >> t ;
while (t-- ){
    int n ;
    cin >>n ;
    vector <int > arr ;
    int i =0 ;
    while (n>0){
        int dig = n%10;
        if (dig !=0){
            arr.push_back(dig * (pow(10 ,i)));
        }
        i++;
        n/=10 ;
 
    }
    cout << arr.size()<< endl ;
    for (int a=0 ;a <arr.size();a++){
        cout << arr[a]<<" ";
    }
    cout << endl ; 
}
 return 0; 
} 
