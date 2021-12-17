#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// Hint: Store all, get pointer via strchr, cout *(ptr - 2)
	char c, s[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	while (cin.get(c))
	{
		c = tolower(c);
		char * pc = strchr(s, c);
		if (pc) cout << *(pc - 2);
		else cout << c;
	}
	return 0;
}