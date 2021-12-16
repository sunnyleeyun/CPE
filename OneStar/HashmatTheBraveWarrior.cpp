#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	// Hint: Overflow
	long long int a, b;
	while (cin >> a >> b)
	{
		cout << abs(a - b) << endl;
	}
}