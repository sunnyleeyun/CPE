#include <iostream>
using namespace std;

void divide(int n, int arr[], int &cnt)
{
	for (cnt = 0; n; ++cnt)
	{
		arr[cnt] = n % 10;
		n /= 10;
	}
}

int main()
{
	// Hint: Counterwiselt put the numbers in arrays
	int a, b;
	while (cin >> a >> b && a != 0 && b != 0)
	{
		int lenA, lenB;
		int arrA[11] = {}, arrB[11] = {};
		int sum[12] = {};
		divide(a, arrA, lenA);
		divide(b, arrB, lenB);
		int lenMax = max(lenA, lenB);
		int count = 0;
		for (int i = 0; i < lenMax; ++i)
		{
			sum[i] += arrA[i] + arrB[i];
			if (sum[i] >= 10)
			{
				count++;
				sum[i + 1]++;
				sum[i] -= 10;
			}
		}
		if (count == 0) cout << "No carry operation." << endl;
		else if (count == 1) cout << "1 carry operation." << endl;
		else cout << count << " carry operations." << endl;
	}
	return 0;
}