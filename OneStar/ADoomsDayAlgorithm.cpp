#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Hint: Store const days of week and month
	string d[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 1/1 sat.
	int n;
	cin >> n;
	int a, b;
	while (n--)
	{
		cin >> a >> b;
		int total = 0;
		if (a > 1)
		{
			for (int i = 0; i < a - 1; ++i) total += m[i];
		}
		total += b;
		cout << d[(total + 4) % 7] << endl;
	}
	return 0;
}