#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Hint: loop through string
	string n;
	while (cin >> n && n != "0")
	{
		while (n.length() > 1)
		{
			int sum = 0;
			for (int i = 0; i < n.length(); ++i)
			{
				int t = n[i] - '0';
				sum += t;
			}
			n = to_string(sum);
		}
		cout << n << endl;
	}
	return 0;
}