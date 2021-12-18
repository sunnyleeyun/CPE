#include <iostream>
using namespace std;

int main()
{
    // Hint: Use trapezoid formula
	int n;
	long long int a, b;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a >> b;
		if (b % 2 == 0) --b;
		if (a % 2 == 0) ++a;
		int count = (b - a) / 2 + 1;
		int sum = (b + a) * count / 2;
		cout << "Case " << i << ": " << sum << endl;
	}
	return 0;
}