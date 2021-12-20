#include <iostream>
using namespace std;

int main()
{
	// Hint: It's ok to repeat
	int m, n;
	while (cin >> m >> n)
	{
		if (m < 2 || n < 2)
		{
			cout << "Boring!" << endl;
			continue;
		}
		int t = m;
		while (t % n == 0 && t > 1)
		{
			t /= n;
		}
		
		if (t != 1) cout << "Boring!" << endl;
		else
		{
			while (m % n == 0 && m > 1)
			{
				cout << m << " ";
				m /= n;
			}
			cout << "1" << endl;
		}
	}
	return 0;
}