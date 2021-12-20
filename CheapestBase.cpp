#include <iostream>
using namespace std;

int main()
{
	// Hint: Create matrix -> calculate each and find min -> output min
	int c;
	cin >> c;
	for (int i = 1; i <= c; ++i)
	{
		if (i > 1) cout << endl;
		cout << "Case " << i << ":" << endl;
		int m[36];
		for (int j = 0; j < 36; ++j) cin >> m[j];
		int n;
		cin >> n;
		while (n--)
		{
			int x;
			cin >> x;
			cout << "Cheapest base(s) for number " << x << ":";
			
			int minInk = 2147483647, ink[37] = {};
			for (int i = 2; i <= 36; ++i)
			{
				for (int v = x; v; v /= i) ink[i] += m[v % i];
				if (ink[i] < minInk) minInk = ink[i];
			}
			for (int i = 2; i <= 36; ++i)
			{
				if (ink[i] == minInk) cout << " " << i;
			}
			cout << endl;
		}
	}
	return 0;
}