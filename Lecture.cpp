//https://codeforces.com/problemset/problem/499/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#include <map>
#include<iomanip>
#include<unordered_map>
#define ll long long 
using namespace std;

int main  () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
int n ,m ;
cin >> n>> m ;
vector < pair <string ,string >> arr (m );
for (int i=0;i<m ;i++){cin >> arr[i].first >> arr[i].second;}


map<string ,int > mymap;
for (int i=0;i<m;i++){
  mymap[arr[i].first] =i;
}
for (int i=0;i<n ;i++){
string s ;
cin >> s ;
auto a =mymap[s];
if (arr[a].first.size()<=arr[a].second.size())
cout <<arr[a].first<<" ";
else 
cout <<arr[a].second<<" ";
}
return 0;
}

//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, string> mp; // يربط الكلمة بالمرادف
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        string alt = mp[word]; // المرادف
        if (alt.size() < word.size()) {
            cout << alt;
        } else {
            cout << word;
        }
        if (i != n - 1) cout << " ";
    }
    cout << "\n";
    return 0;
}

