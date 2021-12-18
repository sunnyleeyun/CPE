#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int s, d;
	while (n--)
	{
		cin >> s >> d;
		int x = s + d;
		int y = s - d;
		if (x % 2 || y % 2 || y < 0) cout << "impossible" << endl;
		else cout << x / 2 << " " << y / 2 << endl;
	}
	return 0;
}