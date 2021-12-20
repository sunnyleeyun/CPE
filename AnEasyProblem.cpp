#include <iostream>
using namespace std;

int main()
{
    // Hint: I have no idea wtf is this.
	char num[10001];
	while (cin >> num)
	{
		int sum = 0, max = 1;
		for (int i = 0; num[i] != 0; ++i)
		{
			int d = 0;
			if (num[i] >= '0' && num[i] <= '9') d = num[i] - '0';
			else if (num[i] >= 'A' && num[i] <= 'Z') d = num[i] - 'A' + 10;
			else if (num[i] >= 'a' && num[i] <= 'z') d = num[i] - 'a' + 36;
			sum += d;
			if (d > max) max = d;
		}
		int r = 0;
		for (r = max + 1; r <= 62; ++r)
		{
			if (sum % (r - 1) == 0) break;
		}
		if (r > 62) cout << "such number is impossible!" << endl;
		else cout << r << endl;
	}
	
	return 0;
}