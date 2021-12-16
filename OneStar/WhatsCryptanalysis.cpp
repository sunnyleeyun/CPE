#include <iostream>
using namespace std;

int main()
{
	// Hint 1: Set up an array. Use the indexes store alphabets, and the value to store the count.
	// Hint 2: cin.ignore(not too small int, '\n') can help avoid extra line
	int n;
	cin >> n;
	cin.ignore(256, '\n');
	char text[1000] = {};
	int maxCount = 0;
	int list[256] = {};
	while (n--)
	{
		cin.getline(text, 1000);
		int i = 0;
		while (text[i] != '\0')
		{
			if (isalpha(text[i]))
			{
				list[toupper(text[i])]++;
				maxCount = max(maxCount, list[toupper(text[i])]);
			}
			++i;
		}
	}
	
	for (int i = maxCount; i >= 1; i--)
	{
		for (char c = 'A'; c <= 'Z'; c++)
		{
			if (list[c] == i) cout << c << " " << i << endl;
		}
	}
		
	return 0;
}