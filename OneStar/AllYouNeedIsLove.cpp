#include <iostream>
using namespace std;
char S1[31], S2[31];

int stringToInt(char s[31]) {
	int res = 0;
	for (int i = 0; i < 30; i++) {
		if (s[i] == '\0') break;
		res *= 2;
		if (s[i] == '1') res++;
	}
	return res;
}

int gcd(int p, int q) {
	if (p < q) return gcd(q, p);
	if (q == 0) return p;
	return gcd(q, p % q);
}

int main() {
	int n; cin >> n;
	for (int j = 1; j <= n; j++) {
		cin >> S1 >> S2;
		int n1, n2;
		n1 = stringToInt(S1);
		n2 = stringToInt(S2);
		cout << "Pair #" << j << ": ";
		if (gcd(n1, n2) > 1) {
			cout << "All you need is love!\n";
		}
		else {
			cout << "Love is not all you need!\n";
		}
	}
	return 0;
}