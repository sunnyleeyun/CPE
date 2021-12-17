#include <iostream>
using namespace std;

int main() {
	long long int a, b;
	while (cin >> a >> b) {
		for (int i = 0; ; i++) {
			if ((a + i) * (i - a + 1) / 2 >= b) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}