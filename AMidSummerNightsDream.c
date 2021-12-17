#include <stdio.h>
#include <stdlib.h>
int m[1000000];

int comp(const void *a, const void *b) {
	return (*(int *)a) - (*(int *)b);
}
void find_mid(int *m, int n) {
	int minM, maxM, nM, nMA, i;
	qsort(m, n, sizeof(int), comp);
	if (n % 2) {
		minM = m[n / 2];
		for (nM = 0, i = 0; i < n; i++) {
			if (minM == m[i]) nM++;	
		}
		nMA = 1;
	}
	else {
		minM = m[n / 2 - 1];
		maxM = m[n / 2];
		for (nM = 0, i = 0; i < n; i++) {
			if (minM <= m[i] && maxM >= m[i]) nM++;
		}
		nMA = maxM - minM + 1;
	}
	printf("%d %d %d\n", minM, nM, nMA);
}
int main() {
	int n, i;
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; i++) {
			scanf("%d", &m[i]);
		}
		find_mid(m, n);
	}	
	return 0;
}