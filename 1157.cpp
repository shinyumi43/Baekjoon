#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?";
	int cnt[26] = { 0 }, max = 0, idx = 0;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]);
		cnt[alpha.find(str[i])]++;
	}
	for (int j = 0; j < 26; j++) {
		if (cnt[j] == 0) continue;
		if (max == cnt[j]) {
			idx = 26;
			continue;
		}
		if (max < cnt[j]) {
			max = cnt[j];
			idx = j;
		}
	}
	cout << alpha[idx] << endl;
}