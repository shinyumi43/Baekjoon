#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int num, sum = 0, add = 0, cnt = 0;
	char arr[80] = {};
	cin >> num;
	while (num > cnt) {
		cin >> arr;
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] == 'O') {
				add++;
				sum += add;
			}
			else {
				add = 0;
			}
		}
		cout << sum << endl;
		sum = 0;
		add = 0;

		cnt++;
	}
	return 0;
}