#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.14159265

int main() {
	double r;
	printf("���� �������� �Է��ϼ���: ");
	scanf_s("%lf", &r);  // Visual Studio�� �Է�

	double surfaceArea = 4.0 * PI * r * r;
	double volume = (4.0 / 3.0) * PI * r * r * r;

	printf("ǥ������ %.2lf�Դϴ�.\n", surfaceArea);
	printf("���Ǵ� %.2lf�Դϴ�.\n", volume);

	return 0;
}
