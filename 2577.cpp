#include <iostream>
using namespace std;
int main() {
    int n[10] = { 0 };
    int a, b, c, total, rest;
    cin >> a >> b >> c;
    total = a * b * c;
    while (total > 0) {
        rest = total % 10;
        total = total / 10;
        n[rest] += 1;
    }
    for (int i = 0; i < 10; i++) {
        cout << n[i] << endl;
    }
    return 0;
}