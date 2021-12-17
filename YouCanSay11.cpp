#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	while (cin >> a && a != "0")
	{
		int even = 0;
		int odd = 0;
		for (int i = 0; i < a.length(); ++i)
		{
			if (i % 2) even += a[i] - '0';
			else odd += a[i] - '0';
		}
		cout << a << " is" << ((even - odd) % 11 == 0 ? " " : " not ") << "a multiple of 11." << endl;
	}
	return 0;
}