//https://codeforces.com/problemset/problem/1373/A
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
        ll a ,b,c ;
        cin >>a>>b>>c ;
        // when first shop is cheper 
        if (a<c){
            cout <<1<<" ";
        }
        else  
        cout <<-1 <<" ";
        // when sec shop is cheaper 
        if (c<a*b){
            cout <<b <<endl ;
        }else 
        cout <<-1 <<endl ;

    }

return 0;
} 
