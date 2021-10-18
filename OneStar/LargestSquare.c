#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int m, n, q;
		scanf("%d%d%d", &m, &n, &q);
		printf("%d %d %d\n", m, n, q);
		int i, j, k;
		char a[101][101];
		for (i = 0; i < m; i++) {
			scanf("%s", a[i]);
		}
		
		for (k = 0; k < q; k++) {
			int x, y, z = 1, l = 1, f = 0;
			scanf("%d%d", &x, &y);
			while (x - l >= 0 && y - l >= 0 && x + l <= m - 1 && y + l <= n - 1) {
				for (i = x - l; i <= x + l; i++) {
					if (f == 1) break;
					for (j = y - l; j <= y + l; j++) {
						if (a[i][j] != a[x - l + z + 2 - 1][y - l + z + 2 - 1]) {
							f = 1;
						}
						if (f == 1) break;
					}
				}
				if (f == 1) break;
				z+=2;
				l++;
			}
			printf("%d\n", z);
		}
		
	}
	return 0;
}