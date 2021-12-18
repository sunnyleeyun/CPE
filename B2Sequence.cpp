#include <iostream>
using namespace std;

int main()
{
	// Hint: Store all -> find individual
	int n, c = 1, m[10001] = {};
	while (cin >> n)
	{
		cout << "Case #" << c << ": ";
		int b = 1, s[20002] = {};
		for (int i = 1; i <= n; ++i)
		{
			cin >> m[i];
			if (m[i] <= m[i - 1]) b = 0;
		}
		
		if (b == 1)
		{
			for (int i = 1; i <= n; ++i)
			{
				for (int j = i; j <= n; ++j)
				{
					if (s[m[i] + m[j]] == 1) b = 0;
					s[m[i] + m[j]] = 1;
				}
			}
			
		}
		cout << "It is" << (b ? " " : " not ") << "a B2-Sequence.\n\n";
		
		++c;
	}
	return 0;
}