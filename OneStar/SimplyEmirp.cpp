#include <iostream>
using namespace std;
int c[1000000];

int main() {
	for (int i = 2; i < 1000; i++) {
		if (c[i] == 1) continue;
		for (int j = i + i; j < 1000000; j += i) c[j] = 1;
	}
	int n;
	while (cin >> n) {
		int dn = n;
		int rn;
		for (rn = 0; dn; dn/=10) rn = rn * 10 + dn % 10;
		if (c[n]) cout << n << " is not prime." << endl;
		else if (c[n] == 0 && c[rn] == 0 && n != rn) cout << n << " is emirp." << endl;
		else cout << n << " is prime." << endl;
	}
	return 0;
}