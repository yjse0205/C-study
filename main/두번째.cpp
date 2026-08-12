#include <stdio.h>
#include <windows.h>
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, y, z;
	printf("삼각형의 내각 2개:");
	scanf_s("%d %d", &x, &y);
	z = 180 - (x + y);
	printf("세번째 각도는 %d입니다.", z);
	return 0;
}