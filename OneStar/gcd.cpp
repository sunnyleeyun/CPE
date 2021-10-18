#include <iostream>
using namespace std;

int gcd(int p, int q) {
	if (q > p) return gcd(p, q);
	if (q == 0) return p;
	return gcd(q, p%q);
}

int main() {
	int a[502] = {0};
	for (int i = 1; i < 502; i++) {
		a[i] = a[i - 1];
		for (int j = 1; j < i; j++) a[i] += gcd(i, j);
	}
	int n;
	while (cin >> n && n != 0) cout << a[n] << endl;
	return 0;
	
}