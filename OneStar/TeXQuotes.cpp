#include <iostream>
using namespace std;

int main()
{
	// Hint: Dude this one is easy af. Just deal with it.
	int isBegin = 0;
	char c;
	while (cin.get(c))
	{
		if (c != '"') cout << c;
		else
		{
			if (isBegin) cout << "''";
			else cout << "``";
			isBegin = !isBegin;
		}
	}
	return 0;
}