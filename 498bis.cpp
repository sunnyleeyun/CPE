#include <iostream>
using namespace std;
int a[1000000]; // If put inside main, things won't work in the UVA ide and I don't know why.

int main()
{ 
    // Hint 1: Understand the question and do the math
    // Hint 2: Deal with the input with getchar() == '\n'
	int x, n;
	while (cin >> x)
	{
		for (n = 0; ; ++n)
		{
			cin >> a[n];
			if (getchar() == '\n') break;
		}
		long long int sum = 0, e = 1;
		for (int i = n - 1; i >= 0; --i)
		{
			sum += a[i] * e * (n - i);
			e *= x;
		}
		cout << sum << endl;
	}
	return 0;
}