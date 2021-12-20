#include <iostream>
using namespace std;

int main()
{
	// Hint: Store a container for days
	int t;
	cin >> t;
	while (t--)
	{
		int d, n, m[3651] = {};
		cin >> d;
		cin >> n;
		while (n--)
		{
			int v;
			cin >> v;
			for (int i = v; i <= d; i += v) m[i] = 1;
		}
		
		int sum = 0;
		for (int i = 0; i <= d; ++i)
		{
			if (m[i] == 1 && i % 7 != 6 && i % 7 != 0) sum++;
		}
		cout << sum << endl;
	}
	return 0;
}