//https://codeforces.com/problemset/problem/1368/A
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
    int a,b,n ;
    cin >> a>>b>>n ;
    int ans =0;
     while (a<=n && b<=n ){
        if (a<b )
        a+=b;
        else 
        b+=a ;
        ans++;
     }
    cout << ans<< endl ;
}

 return 0; 
} 
/*


  a += b و b += a

a + b = b + a
لكن في عملية
+=
يوجد فرق مهم في مكان التخزين:

a += b ➜ يجعل a أكبر، بينما b يظل ثابتًا.

b += a ➜ يجعل b أكبر، بينما a يظل ثابتًا.

 إذا جعلت أحد المتغيرين ثابتًا دائمًا، فإن المتغير الآخر سيكبر ببطء نسبيًا.
 أفضل استراتيجية هي التناوب: في كل خطوة نجعل المتغير الأصغر يزيد بالمتغير الأكبر.
بهذه الطريقة يكبران معًا بسرعة أكبر وتقل عدد العمليات المطلوبة.
*/
