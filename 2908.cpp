#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;

    string big;
    int n = 3;

    for (int i = 0; i < 3; i++) {
        if (a[n - i - 1] > b[n - i - 1]) {
            big = a; break;
        }
        else if (a[n - i - 1] < b[n - i - 1]) {
            big = b; break;
        }
    }
    cout << big[2] << big[1] << big[0] << endl;
    return 0;
}