#include <stdio.h>

int main() {
	char s[10001];
	int i, d, sum, max, r;
	
	while (scanf("%s", s) != EOF) {
		max = 1;
		sum = 0;
		for (i = 0; s[i] != 0; i++) {
			d = 0;
			if (s[i] >= '0' && s[i] <= '9') d = s[i] - '0';
			if (s[i] >= 'A' && s[i] <= 'Z') d = s[i] - 'A' + 10;
			if (s[i] >= 'a' && s[i] <= 'z') d = s[i] - 'a' + 36;
			sum += d;
			if (d > max) max = d;
		}
		for (r = max + 1; r <= 62; r++) {
			if (sum % (r - 1) == 0) break;
		}
		printf(r > 62 ? "such number is impossible!\n" : "%d\n", r);
	}
	
	return 0;
}