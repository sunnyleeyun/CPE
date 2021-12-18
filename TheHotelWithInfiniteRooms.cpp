#include <iostream>
using namespace std;

int main()
{
	// Hint: Use you brain and pencil. It's math.
	long long int s, d;
	while (cin >> s >> d)
	{
		while (d > 0)
		{
			d -= s;
			++s;
		}
		cout << s - 1 << endl;
	}
	return 0;
}