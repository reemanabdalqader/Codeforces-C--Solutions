//https://codeforces.com/group/r3nqM9IbLF/contest/592786/problem/A

/*
Problem: 
We need to calculate the **minimum required fuel tank capacity** 
to go from point 0 to point x and return back to 0.
There are gas stations at certain points between 0 and x.
You can refuel only at gas stations (not at 0 or x).

Approach:
- The tank must be large enough to handle the **longest distance 
  without a gas station**.
- This includes:
   1. The distance from 0 to the first gas station
   2. The distances between all consecutive gas stations
   3. The **round-trip** distance from the last gas station to point x,
      since there is no gas station at x (so you must go to x and back without refueling).

Steps:
1. Read input: number of gas stations (n), destination point (x), and gas station positions.
2. Calculate the maximum gap between:
   - 0 and the first station
   - consecutive stations
   - and **2 * (x - last station)** ← (go and return without gas station)
3. The answer is the maximum of all those distances.

This gives the minimum required fuel tank capacity to make the full trip safely.
*/

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
while (t--){
  int n , x ;
  cin >> n >> x ;
  int arr [n ];
  for(int i=0;i<n ;i++){
     cin >> arr [i];
  }
  int max1 = arr[0];
  for (int i=1;i<n;i++){
    int v=arr[i]-arr[i-1];
    max1 = max(max1,v);
  }
  int g =(x-arr[n-1])*2;
  cout << max(max1,g)<<endl ;
}
 return 0; 
} 
