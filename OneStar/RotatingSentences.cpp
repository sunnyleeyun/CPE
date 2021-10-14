#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100][101];
	int len[100], n = 0, max = 0;
	while (cin.getline(str[n], 101)) {
		len[n] = strlen(str[n]);
		if (len[n] > max) max = len[n];
		for (int i = len[n]; i < max; i++) {
			str[n][i] = ' ';
			len[n]++;
		}
		n++;
	}
	for (int i = 0; i < max; i++) {
		for (int j = n - 1; j >= 0; j--) {
			if (i < len[j]) cout << str[j][i];
		}
		cout << endl;
	}
	return 0;
}