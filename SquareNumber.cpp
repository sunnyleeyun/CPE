#include <iostream>
using namespace std;

int main()
{
    // Hint: Compute all square number between range -> get from input range
	int a, b,  m[100001] = {};
	for (int i = 1; i * i < 100001; ++i)
	{
		m[i * i] = 1;
	}
	for (int i = 1; i < 100001; ++i)
	{
		m[i] += m[i - 1];
	}
	
	while (cin >> a >> b && a != 0)
	{
		cout << (m[b] - m[a - 1]) << endl;
	}
	return 0;
}