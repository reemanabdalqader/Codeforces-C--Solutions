//https://codeforces.com/problemset/problem/1430/C
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // اقرأ عدد الحالات

    while (t--) {
        int n;
        cin >> n;

        cout << 2 << endl; // الرقم النهائي

        int last = n;
        for (int i = n - 1; i >= 1; i--) {
            cout << last << " " << i << endl;
            last = (last + i + 1) / 2; // تقريب لأعلى
        }
    }

    return 0;
}
