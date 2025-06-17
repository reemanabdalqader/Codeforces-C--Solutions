// https://codeforces.com/contest/1294/problem/C
/*Problem: Three Distinct Factors
Goal:
Given an integer n, find three distinct integers a, b, and c 
If it's possible, print "YES" followed by the three numbers. Otherwise, print "NO".

 Approach
We want to factor n into three distinct integers ≥ 2.
We do this in two steps:

1. Find the first factor a
Loop from i = 2 up to √n.
If i divides n, set:

a = i

b = n / i

Now we have n = a × b.
We continue factoring b.

2. Find the second factor b
Now we try to divide the updated b again using values greater than a, so we avoid duplicates.
If i divides b, set:

b = i

c = n / (a × b)

3. Validate the result
We check:

All three numbers are distinct

All are ≥ 2

Their product is exactly n

If all conditions pass → print YES and the values.
Otherwise → print NO.

 Why It Works
The first division helps break n into two factors.
Then we try to break one of them again while ensuring all three values are:

Distinct ≥ 2

This strategy avoids full prime factorization and works fast, even for large numbers.

Time Complexity
Each test case: O(√n)

Efficient for t ≤ 100, n ≤ 10⁹
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
void solve (){
ll  n ;cin >>n ;
ll a =-1, b=-1, c=-1 ;
for (int i=2;i*i <=n ;i++){
  if( n%i==0){
    a=i;
    b=n/i;
    break ;
   } }
   if (a==-1){
    cout << "NO"<<endl ;
    return  ;
   }

for (int i=a+1;i*i <=n ;i++){
  if( b%i==0){
    b=i ;
    c=n/(a*b);
    break ;
   } 
}
if (b != -1 && c != -1 && a != b && b != c && a != c && c > 1) {
 cout << "YES"<<endl <<a<<" "<<b<<" "<< c <<endl ;
}else {
   cout << "NO"<<endl ;
}
}
int main() {
ll t ;cin >>t ;
while (t--){
  solve ();
}
  return 0; 
} 
