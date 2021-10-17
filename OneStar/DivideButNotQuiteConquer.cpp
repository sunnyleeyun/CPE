#include <iostream>
using namespace std;

int main() {
	int a, b; 
	while (cin >> a >> b) {
		if (a < 2 || b < 2) {
			cout << "Boring!" << endl;
			continue;
		}
		int x = a;
		while (x % b == 0 && x > 1) {
			x /= b;
		}
		if (x == 1) {
			while (a % b == 0 && a > 1) {
				cout << a << " ";
				a /= b;
			}
			cout << "1" << endl;
		} else {
			cout << "Boring!" << endl;
		}
		
	}
	return 0;
}