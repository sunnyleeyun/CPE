#include <iostream>
using namespace std;

int main() {
	int m[10005] = {0}, n = 0, i, j, b = 1, c = 1;
	
	while (cin >> n) {
		for (i = 1; i <= n; i++) {
			cin >> m[i];
			if (m[i - 1] >= m[i]) b = 0;
		}
		
		int note[20005] = {0};
		if (b == 1) {
			for (i = 1; i <= n; i++) {
				for (j = i; j <= n; j++) {
					if (note[m[i] + m[j]] == 1) b = 0;
					else note[m[i] + m[j]] = 1;
				}
			}
		}
		cout << "Case #" << c << ": It is ";
		cout << (b ? "a B2-Sequence" : "not a B2-Sequence") << ".\n\n";
		
		c++;
	}
	return 0;
}