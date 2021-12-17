#include <iostream>
#include <set>
using namespace std;

int main()
{
	// Hint: use set
	int n;
	while (cin >> n)
	{
		set<int> s;
		int a;
		cin >> a;
		for (int i = 1; i < n; ++i)
		{
			int b;
			cin >> b;
			int d = (b - a > 0) ? (b - a) : (a - b);
			if (d && d < n) s.insert(d);
			a = b;
		}
		if (s.size() == n - 1) cout << "Jolly";
		else cout << "Not jolly";
		cout << endl;
	}
	return 0;
}