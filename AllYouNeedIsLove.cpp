#include <iostream>
using namespace std;
char s[31], l[31];

int stringToInt(char str[31])
{
	int res = 0;
	for (int i = 0; i < 31; ++i)
	{
		if (str[i] == '\0') break;
		res *= 2;
		if (str[i] == '1') res++;
	}
	return res;
}

int gcd(int p, int q)
{
	if (q > p) return gcd(q, p);
	if (q == 0) return p;
	return gcd(q, p % q);
}

int main()
{
	// Hint: gcd
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cout << "Pair #" << i << ": ";
		cin >> s >> l;
		int S = stringToInt(s);
		int L = stringToInt(l);
		if (gcd(S, L) > 1) cout << "All you need is love!" << endl;
		else cout << "Love is not all you need!" << endl;
	}
	return 0;
}