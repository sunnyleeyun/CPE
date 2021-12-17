#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[1001], b[1001];
	int ca[123] = {}, cb[123] = {};
	int i = 0, j = 0;
	while (gets(a))
	{
		gets(b);
		memset(ca, 0, sizeof(ca));
		memset(cb, 0, sizeof(cb));
		i = 0;
		while (a[i] != '\0')
		{
			ca[a[i]]++;
			++i;
		}
		
		i = 0;
		while (b[i] != '\0')
		{
			cb[b[i]]++;
			++i;
		}
		
		for (int i = 97; i <= 122; ++i)
		{
			j = 0;
			while (j < ca[i] && j < cb[i])
			{
				printf("%c", i);
				++j;
			}
		}
		cout << endl;
	}
	return 0;
}