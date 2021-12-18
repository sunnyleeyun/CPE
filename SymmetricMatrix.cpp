#include <iostream>
using namespace std;

int main()
{
    // Hint: Store into matrix -> check symmetrix
	int t, n, m[101][101];
	cin >> t;
	char temp;
	for (int u = 1; u <= t; ++u)
	{
		cout << "Test #" << u << ": ";
		cin >> temp >> temp >> n;
		int s = 1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin >> m[i][j];
				if (m[i][j] < 0) s = 0;
			}
		}
		
		for (int i = 0; i < n / 2; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (m[i][j] != m [n - i - 1][n - j - 1]) s = 0;
			}
		}
		cout << (s ? "Symmetric" : "Non-symmetric") << "." << endl;
	}
	return 0;
}