#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, int> count;
	map<string, int>::iterator iter;
	int n;
	cin >> n;
	cin.ignore();
	string country;
	char others[76] = {};
	while (n--)
	{
		cin >> country;
		count[country]++;
		cin.getline(others, 76);
	}
	for (iter = count.begin(); iter != count.end(); ++iter)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	return 0;
}