#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// Hint1: Store in a two dimention char array, add space to fill length, then turn 90 degree
	char s[101][101];
	int n = 0;
	int len[101] = {}, maxLen = 0;
	while (cin.getline(s[n], 101))
	{
		len[n] = strlen(s[n]);
		if (len[n] > maxLen) maxLen = len[n];
		for (int k = len[n]; k < maxLen; ++k)
		{
			s[n][k] = ' ';
			++len[n];
		}
		++n;
	}
	
	for (int j = 0; j < maxLen; ++j)
	{
		for (int i = n - 1; i >= 0; --i)
		{
			if (j < len[i]) cout << s[i][j];
		}
		cout << endl;
	}
	return 0;
}