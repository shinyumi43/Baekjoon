#include <iostream>
using namespace std;
int main() {
    int i, max = 0, max_i = 0;
    int a[9] = {};
    for (i = 0; i < 9; i++) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
            max_i = i;
        }
    }
    cout << max << "\n" << max_i + 1 << endl;
    return 0;
}