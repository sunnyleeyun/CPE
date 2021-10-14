#include <iostream>
using namespace std;

int main() {
	char d[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int month, day;
	int n;
	cin >> n;
	while (n--) {
		cin >> month >> day;
		int t = 0;
		for (int i = 0; i < month - 1; i++) {
			t += m[i];
		}
		
		t += day;
		cout << d[(t + 4) % 7] << endl;
	}
	
	return 0;
}