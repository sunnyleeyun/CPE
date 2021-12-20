#include <iostream>
using namespace std;

int main()
{
	// Hint: Create the Fib first. -> reverse and print out
	int f[40] = {0, 1};
	for (int i = 2; i < 40; ++i)
	{
		f[i] = f[i - 1] + f[i - 2];
	}

	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		cout << m << " = ";
		bool isBegin = false;
		for (int j = 39; j >= 2; --j)
		{
			if (m >= f[j])
			{
				m -= f[j];
				isBegin = true;
				cout << "1";
			}
			else if (isBegin) cout << "0";
		}
		cout << " (fib)" << endl;
	}
	return 0;
}
