#include <stdio.h>

int main() {
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int a, b, res;
		scanf("%d", &a);
		scanf("%d", &b);
		if (a % 2 == 0) a++;
		if (b % 2 == 0) b--;
		res = (a + b) * ((b - a) / 2 + 1) / 2;
		printf("Case %d: %d\n", i + 1, res);
	}
	return 0;
}