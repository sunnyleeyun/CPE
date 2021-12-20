#include <iostream>
using namespace std;

int main()
{
	// Hint: Only need to add the remainder
	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		int b1 = 0, b2 = 0;
		for (int v = m; v; v/=2) b1 += v % 2;
		while (m)
		{
			for (int v = m % 10; v; v/=2) b2 += v % 2;
			m /= 10;
		}
		cout << b1 << " " << b2 << endl;
	}
	return 0;
}