#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n = 0;
    double sum = 0.0, max = 0.0;
    cin >> n;
    double* p = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (p[i] > max) max = p[i];
    }
    for (int i = 0; i < n; i++) {
        p[i] = (p[i] / max) * 100.0;
        sum += p[i];
    }
    cout << fixed << setprecision(6) << sum / (double)n << endl;
}