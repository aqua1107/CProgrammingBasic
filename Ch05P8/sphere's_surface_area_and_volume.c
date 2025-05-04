#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.14159265

int main() {
	double r;
	printf("구의 반지름을 입력하세요: ");
	scanf_s("%lf", &r);  // Visual Studio용 입력

	double surfaceArea = 4.0 * PI * r * r;
	double volume = (4.0 / 3.0) * PI * r * r * r;

	printf("표면적은 %.2lf입니다.\n", surfaceArea);
	printf("부피는 %.2lf입니다.\n", volume);

	return 0;
}
