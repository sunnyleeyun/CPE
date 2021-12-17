#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 2 * acos(0.0)

int main() {
	double s, a;
	double arc, chord;
	char u[4];
	while (scanf("%lf %lf %s", &s, &a, u) != EOF) {
		s += 6440.0;
		if (strcmp(u, "min") == 0) a/=60.0;
		if (a > 180.0) a = 360.0 - a;
		arc = 2.0 * PI * s * a / 360.0;
		chord = s * sin(a / 2 * PI / 180) * 2;
		printf("%.6lf %.6lf\n", arc, chord);
	}
	return 0;
}