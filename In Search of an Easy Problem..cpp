//https://codeforces.com/problemset/problem/1030/A
/*You are given opinions from n people about a programming problem.
Each person says the problem is either:

0: Easy

1: Hard

If at least one person thinks the problem is hard, then the coordinator should replace the problem.
Otherwise, if everyone thinks it’s easy, then it’s fine.*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
int main  (){
int t ;
cin >> t;
int arr [t];
for (int i=0;i<t;i++){
cin >> arr[i];
}

for (int i=0;i<t ;i++){
    if (arr[i]==1){
        cout <<"HARD";
        return 0 ;
    }
}
cout << "easy";
 return 0; 
} 
