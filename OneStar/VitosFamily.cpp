#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	// Hint: Medium
	int n, r, s;
	cin >> n;
	vector<int> num;
	while (n--)
	{
		cin >> r;
		num.clear();
		for (int i = 0; i < r; ++i)
		{
			cin >> s;
			num.push_back(s);
		}
		sort(num.begin(), num.end());
		int mid = num[r/2];
		int d = 0;
		for (int i = 0; i < r; ++i)
		{
			d += abs(num[i] - mid);
		}
		cout << d << endl;
	}
}