#include <stdio.h>

int main() {
	int x, y;
	printf("정수 2개를 입력하시오: ");
	scanf_s("%d %d", &x, &y);
	int divisor = x / y;
	int dividend = x % y;
	printf("몫: %d\n나머지: %d\n", divisor, dividend);
	return 0;
}