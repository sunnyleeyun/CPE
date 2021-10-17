#include <iostream>
#include <stack>
using namespace std;

int main() {
	int m;
	stack<int> s;
	while (cin >> m && m) {
		int b = 0;
		for (; m; m/=2) {
			b += m % 2;
			s.push(m % 2);
		}
		cout << "The parity of ";
		while (!s.empty()) {
			cout << s.top();
			s.pop();
		}
		cout << " is " << b << " (mod 2).\n";
	}
	return 0;
}