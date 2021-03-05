#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int C = 0, N = 0;
    cin >> C;
    for (int i = 0; i < C; i++) {
        cin >> N;
        int score[1000] = { 0 }, sum = 0;
        double avg = 0.00;
        for (int j = 0; j < N; j++) {
            cin >> score[j];
            sum += score[j];
        }
        avg = (double)sum / N;
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (avg < score[j]) {
                count++;
            }
        }
        cout << fixed << setprecision(3) << (double)count * 100 / N << "%" << endl;
    }
    return 0;
}