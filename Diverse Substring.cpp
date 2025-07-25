//https://codeforces.com/problemset/problem/1073/A
#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            cout << "YES\n";
            cout << s[i] << s[i + 1] << '\n';
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}
