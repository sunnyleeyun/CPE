 #include <iostream>
 using namespace std;
 
 void kuti(int data, int start)
 {
 	char* name[] = {"lakh", "hajar", "shata", ""};
 	int base[4] = {100000, 1000, 100, 1};
 	int mod[4] = {100, 100, 10, 100};
 	for (int i = 0; i < 4; ++i)
 	{
 		int v = data / base[i] % mod[i];
 		if (v == 0 && start == 0) continue;
 		start = 1;
 		if (v) cout << " " << v << (i == 3 ? "" : " ") << name[i];
 	}
 }
 
 int main()
 {
 	// Hint: Fucking hard.
 	long long int n, index = 0;
 	while (cin >> n)
 	{
 		printf("%4d.", ++index);
 		long long int base = 10000000;
 		long long int a = n / base / base % base;
 		long long int b = n / base % base;
 		long long int c = n % base;
 		kuti(a, 0);
 		if (a) cout << " kuti";
 		kuti(b, a);
 		if (a|b) cout << " kuti";
 		kuti(c, a|b);
 		
 		if (n == 0) cout << " 0";
 		cout << endl;
 	}
 	return 0;
 }