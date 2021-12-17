#include <stdio.h>
#include <stdlib.h>

int main() {
	int c = 1, cases, n;
	int i, j;
	char temp[100];
	long long m[100][100];
	scanf("%d", &cases);
	while (c <= cases) {
		int s = 1;
		scanf("%s%s%d", temp, temp, &n);
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				scanf("%lld", &m[i][j]);
				if (m[i][j] < 0) s = 0;
			}
		}
		
		if (s == 1) {
			for (i = 0; i < n; i++) {
				if (s == 0) break;
				for (j = 0; j < n; j++) {
					if (m[i][j] != m[n - i - 1][n - j - 1]) {
						s = 0;
						break;
					}
				}
			}
		}
		
		printf("Test #%d: %s.\n", c, s ? "Symmetric" : "Non-symmetric");
		c++;
	}
	return 0;
}