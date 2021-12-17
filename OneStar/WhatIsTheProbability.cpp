#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Hint: Find the formula. Use your math brain if applicable.
	int s;
	cin >> s;
	while (s--)
	{
		int n;
		double p;
		int i;
		cin >> n >> p >> i;
		if (p < 0.001) cout << "0.0000";
		else 
		{
			double res = pow(1 - p, i - 1) * p * (1 / (1 - pow(1 - p, n))); 
			printf("%.4lf", res);
		}
		cout << endl;
	}
	return 0;
}