#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		int l; cin >> l;
		int m[100] = {}, c = 0;
		for (int i = 0; i < l; i++) {
			cin >> m[i];
		}
		for (int i = 0; i < l - 1; i++) {
			for (int j = 0; j < l - i - 1; j++) {
				if (m[j] > m[ja+ 1]) {
					swap(m[j], m[j + 1]);
					c++;
				}
			}
		}
		cout << "Optimal train swapping takes " << c << " swaps.\n";
	}
	return 0;
}