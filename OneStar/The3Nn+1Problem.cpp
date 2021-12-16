#include <iostream>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a << " " << b << " ";
		int maxLen = 0;
		if (a > b)
		{
			int c = a;
			a = b;
			b = c;
		}
		for (int i = a; i <= b; ++i)
		{
			int n = i;
			int tempLength = 1;
			do {
				tempLength++;
				if (n % 2) n = 3 * n + 1;
				else n = n / 2;
			} while (n != 1);
			maxLen = max(maxLen, tempLength);
		}
		cout << maxLen << endl;
	}
	return 0;
}