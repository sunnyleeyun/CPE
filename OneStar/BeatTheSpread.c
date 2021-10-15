#include <stdio.h>

int main() {
	long long i, n;
	scanf("%lld", &n);
	for (i = 0; i < n; i++) {
		long long s, d, a, b;
		scanf("%lld %lld", &s, &d);
		a = s + d;
		if (a % 2) {
			printf("impossible\n");
			continue;
		}
		a /= 2;
		b = a - d;
		if (a < 0 || b < 0) {
			printf("impossible\n");
			continue;
		}
		printf("%lld %lld\n", a > b ? a : b, a > b ? b : a);
		
	}
	return 0;
}