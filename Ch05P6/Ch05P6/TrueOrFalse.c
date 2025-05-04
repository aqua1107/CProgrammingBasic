#include <stdio.h>
#include <math.h>

int main() {
	int truefalse;
	truefalse = fabs(1.0 - 0.9 == 0.1) < 1e-9;
	printf("(1.0 - 0.9) == 0.1Àº %dÀÌ´Ù.", truefalse);
	return 0;
}