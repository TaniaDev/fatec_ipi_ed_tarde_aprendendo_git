#include <stdio.h>
int main() {
	int i;
	float f;
	for (i=1, f=1 /*lista*/; i<=14/*bool*/; i++) {
		f = f * i;
		printf("\nfatorial de %d = %.0f", i, f);
	}
	return 0;
}