#include <iostream>
using namespace std;
const int MAX_L = 36;

int main() {
	int n; cin >> n;
	for (int k = 1; k <= n; k++) {
		if (k > 1) cout << endl;
		cout << "Case " << k << ":\n";
		int a[MAX_L];
		for (int i = 0; i < MAX_L; i++) {
			cin >> a[i];
		}
		int nn; cin >> nn;
		while (nn--) {
			int v; cin >> v;
			int b[MAX_L + 1];
			for (int i = 2; i <= MAX_L; i++) {
				b[i] = 0;
				for (int j = v; j; j/=i) {
					b[i] += a[j % i];
				}
			}
			cout << "Cheapest base(s) for number " << v << ":";
			int mi = b[2];
			for (int i = 3; i <= MAX_L; i++) {
				if (b[i] < mi) mi = b[i];
			}
			for (int i = 2; i <= MAX_L; i++) {
				if (b[i] == mi) cout << " " << i;
			}
			cout << endl;
		}
	}
	
	return 0;
}