#include <iostream>
#include <stack>
using namespace std;

int main()
{
	// Hint: stack
	int n;
	stack<int> s;
	while (cin >> n && n != 0)
	{
		cout << "The parity of ";
		int b = 0;
		for (int v = n; v; v /= 2)
		{
			s.push(v % 2);
			b += v % 2;
		}
		
		while (!s.empty())
		{
			cout << s.top();
			s.pop();
		}
		cout << " is " << b << " (mod 2)." << endl;
		
	}
	return 0;
}