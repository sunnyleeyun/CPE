#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (cin >> s && s != "0") {
		int v = 0, d = 1;
		for (int i = 0; i < s.size(); i++) v += s[i] - '0';
		if (v % 9 == 0) {
			while (v != 9) {
				int sum = 0;
				for (; v; v/=10) sum += v % 10; 
				v = sum;
				d += 1;
			}
			cout << s << " is a multiple of 9 and has 9-degree " << d << "." << endl;
		}
		else {
			cout << s << " is not a multiple of 9." << endl;
		}
		
	}
	return 0;
}