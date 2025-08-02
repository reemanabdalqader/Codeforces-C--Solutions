//https://codeforces.com/problemset/problem/158/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#define ll long long 
using namespace std;
int main  () {
  int n ;
  cin >> n ;
  int arr[n ];
  for (int i=0;i<n ;i++){
    cin >> arr[i];
  }
  int count1=0;
  int count2=0 , count3=0,count4=0;
  for (int c:arr){
    if (c==1)count1++;
    else if (c==2)count2++;
    else if (c==3)count3++;
    else count4++;
  }
  int numcar= count4;
 // count 3 with 1 
 int min13= min(count1, count3 );
 numcar +=count3;
 count1-= min13;

 //count 2 
 numcar+=(count2/2);
if (count2%2==1){
numcar++;
count1 -= min(2, count1);

}
//count 1
if (count1 !=0 ){
 numcar+= (count1/4);
 if (count1%4 !=0)numcar++;
}
cout << numcar ;

return 0;
}
