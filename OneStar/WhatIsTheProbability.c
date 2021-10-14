#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int s, num, n, i;
	double p, res;
	scanf("%d", &s);
	for (num = 0; num < s; num++) {
		scanf("%d%lf%d", &n, &p, &i);
		if (p < 0.0001) {
			printf("0.0000\n");
		}
		else {
			res = pow(1 - p, i - 1) * p / (1 - pow(1 - p, n));
			printf("%.4lf\n", res);
		}
	}
	return 0;
}