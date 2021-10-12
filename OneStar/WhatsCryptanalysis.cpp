#include <iostream>
#include <cctype>
using namespace std;

int main() {
	int n = -1, M = -1, list[256] = {0};
	char text[1000];
	cin >> n;
	cin.ignore(256, '\n');
	while (n--) {
		cin.getline(text, 1000);
		int i = 0;
		while (text[i] != '\0') {
			if (isalpha(text[i])) {
				text[i] = toupper(text[i]);
				list[text[i]]++;
				M = max(M, list[text[i]]);
			}
			i++;
		}
	}
	
	for (M; M>=1; M--) {
		for (char c = 'A'; c <= 'Z'; c++) {
			if (M == list[c]) {
				cout << c << " " << M << endl;
			}
		}
	}
	return 0;
}