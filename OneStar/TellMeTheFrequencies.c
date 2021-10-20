#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

typedef struct pair {
	int frequency;
	char charASCII;
} pair;

int compare(const void* a, const void* b) {
	if ((((pair* )a) -> frequency) != (((pair* )b) -> frequency)) {
		return (((pair *)a) -> frequency) - (((pair* )b) -> frequency);
	}
	else {
		return (((pair *)b) -> charASCII) - (((pair* )a) -> charASCII);
	}
}

void print(pair* myData) {
	int i;
	for (i = 0; i < 95; i++) {
		if (myData[i].frequency == 0) printf("");
		else printf("%d %d\n", myData[i].charASCII, myData[i].frequency);
	}
}

int main() {
	struct pair* myData = (struct pair*)malloc(95 * sizeof(struct pair));
	int i, len, flag = 0;
	char str[999];
	
	while (gets(str) != NULL) {
		for (i = 0; i < 95; i++) {
			(myData + i) -> charASCII = i + 32;
			(myData + i) -> frequency = 0;
		}
		if (flag != 0) printf("\n");
		flag++;
		len = strlen(str);
		for (i = 0; i < len; i++) {
			myData[str[i] - 32].frequency++;
		}
		qsort(myData, 95, sizeof(struct pair), compare);
		print(myData);
	}
	return 0;
}