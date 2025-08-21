//https://codeforces.com/problemset/problem/450/A

#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main() {
int n ;
int m ;
cin >> n >> m;
queue <pair <int ,int >> myqueue ;
for (int i=1;i<=n ;i++){
    int a ;
cin >> a;
myqueue.push({i,a});
}
while (myqueue .size ()>1){
    auto f =myqueue.front ();
    int a=f.second -m ;
    if (a<=0)myqueue.pop();
    else {
        f.second=a;
        myqueue .pop();
        myqueue.push({f.first,f.second});

    }
   
} 
cout << myqueue.front().first<< endl ;
    return 0;
}
