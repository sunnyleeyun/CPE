#include <stdio.h>

int main() {
	int m[100001] = {};
	int i;
	for (i = 1; i * i < 100001; i++) {
		m[i * i] = 1;
	}
	for (i = 1; i < 100001; i++) {
		m[i] += m[i - 1];
	}
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF) {
		if (a == 0 && b == 0) {
			break;
		}
		printf("%d\n", m[b] - m[a - 1]);
	}
	return 0;
}