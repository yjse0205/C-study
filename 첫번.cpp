#include <stdio.h>
#include <windows.h>
int main(void) {
	/*int x;
	int y;
	int sum;
	x = 100;
	y = 200;
	sum = x + y;
	printf("두 수의 합=%d \n", sum);
	return 0; */
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x;
	int y;
	int sum;

	printf("첫 번째 숫자를 입력하시오:");
	scanf_s("%d", &x);  /*x의값을 받아서 넣어야하므로 주소가 필요해서 &붙음*/

	printf("두 번째 숫자를 입력하시오:");
	scanf_s("%d", &y);

	sum = x + y;
	printf("두 수의 합=%d \n", sum); /*얘는 걍 sum만 넣으면 됨 주소를 알고있어서 &필요없음*/
	return 0;
}