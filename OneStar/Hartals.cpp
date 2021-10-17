#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		int d, p, m[3650] = {0};
		cin >> d;
		cin >> p;
		while (p--) {
			int v; cin >> v;
			for (int i = v; i <= d; i += v) m[i] = 1;
		}
		int r = 0;
		for (int i = 0; i <= d; i++) {
			if (m[i] == 1 && i % 7 != 6 && i % 7 != 0) r += 1;
		}
		cout << r << "\n";
	}
	return 0;
}