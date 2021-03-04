#include <iostream>
using namespace std;
int main() {
    int n[10] = { 0 }, res[42] = { 0 }, rest = 0, count = 0;
    for (int i = 0; i < 10; i++) {
        cin >> n[i];
        rest = n[i] % 42;
        res[rest] += 1;
    }
    for (int i = 0; i < 42; i++) {
        if (res[i] != 0) {
            count += 1;
        }
    }
    cout << count;
    return 0;
}