//https://codeforces.com/problemset/problem/118/B
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
int totalrow =2*n +1 ;
for (int i =0 ;i<totalrow;i++){
     int current_num ;
     if(i<=n )
     current_num=i;
     else
      current_num =2*n-i;
      int space =2*(n-current_num);
      cout <<string(space,' ');
      vector <int > arr ;
      for (int i=0;i<=current_num;i++)
      arr.push_back(i);
      for (int i=current_num-1;i>=0;i--)
      arr.push_back(i);
      for (size_t i=0;i<arr.size();i++){
        if (i!=0)
        cout <<" ";
        cout <<arr[i];
      }
      cout << endl ;
}
return 0;
}
