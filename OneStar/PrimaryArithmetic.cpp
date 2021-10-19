#include <iostream>
#include <cstring>
using namespace std;

void divide(int n, int arr[11], int &cnt) {
	for (cnt = 0; n; cnt++) {
		arr[cnt] = n%10;
		n/=10;
	}
}

int main() {
	int a, b;
	while (cin >> a >> b && (a != 0 || b != 0)) {
		int c = 0;
		int lenA, lenB;
		int arrA[11] = {0}, arrB[11] = {0};
		int sum[12] = {0};
		divide(a, arrA, lenA);
		divide(b, arrB, lenB);
		int lenM = max(lenA, lenB);
		for (int i = 0; i < lenM; i++) {
			sum[i] += arrA[i] + arrB[i];
			if (sum[i] >= 10) {
				sum[i] -= 10;
				sum[i+1]++;
				c++;
			}
		}
		if (c == 0) cout << "No carry operation." << endl;
		else if (c == 1) cout << "1 carry operation." << endl;
		else cout << c << " carry operations." << endl;
	}
	return 0;
}