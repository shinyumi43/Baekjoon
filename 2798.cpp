#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, Res = 0;
    int Arr[101] = { 0, };
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if (Arr[i] + Arr[j] + Arr[k] <= M
                    && Arr[i] + Arr[j] + Arr[k] > Res)
                    Res = Arr[i] + Arr[j] + Arr[k];
            }
        }
    }
    cout << Res << "\n";
}