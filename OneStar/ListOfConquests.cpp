#include <iostream>
#include <sstream>
#include <set>
#include <map>
using namespace std;

int main() {
	map<string, int> count;
	map<string, int> ::iterator iter;
	set<string> exist;
	stringstream ss;
	char entire_c[76] = {0};
	string entire_s, first_s;
	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		cin.getline(entire_c, 76);
		entire_s = entire_c;
		if (exist.count(entire_s)<=0) {
			exist.insert(entire_s);
			ss.str("");
			ss << entire_s;
			ss >> first_s;
			count[first_s]++;
		}
	}
	for (iter = count.begin(); iter != count.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}
	return 0;
}