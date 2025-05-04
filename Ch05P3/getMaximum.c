#include <stdio.h>

int main() {
	int x, y, z;
	printf("정수 3개를 입력하시오: ");
	scanf_s("%d %d %d", &x, &y, &z);
	int maximum = (x > y) ? x : y;
	maximum = (y > z) ? y : z;
	printf("최대값은 %d입니다.", maximum);
	return 0;
}