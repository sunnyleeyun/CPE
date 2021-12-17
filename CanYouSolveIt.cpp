#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		long long int p1, p2;
		p1 = (x1 + y1 + 1) * (x1 + y1) / 2 + x1;
		p2 = (x2 + y2 + 1) * (x2 + y2) / 2 + x2;
		cout << "Case " << i << ": " << p2 - p1 << endl;
	}
	return 0;
}

