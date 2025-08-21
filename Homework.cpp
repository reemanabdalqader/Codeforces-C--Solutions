//https://codeforces.com/contest/2132/problem/A

#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin >> t; 
while (t--){
    int n ;
    cin >> n ;
    string a;
    cin >> a ;
    int m ;
    cin >>m ;
     string b,c;
    cin >> b>>c ;
    // v begin 
    // D end 
    vector <char > vec (a.begin (),a.end());
    for (int i=0;i<m ;i++){
        if (c[i]=='V'){
            vec.insert(vec.begin(),b[i]);
        }else 
        vec.push_back(b[i]);
    }
  for (char a:vec ){
    cout << a;
  }  
  cout << endl ;
}
    return 0;
}
