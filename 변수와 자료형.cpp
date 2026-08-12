#include<stdio.h>
#include<Windows.h>
//제어문자 |a: 경고소리 getchar():줄바꿈문자 없애기 |b: 백스페이스 |f: 폼피드 |n: 줄바꿈 |r: 캐리지리턴 |t: 탭 |v: 수직탭
/*int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	//16진수 출력 %#x 8진수 출력 %#o
	unsigned char data; //0~255까지의 값을 저장할 수 있는 8비트짜리 변수 data를 만든다
	int led;

	printf("몇번째 LED를 할까요?(1~8):");
	scanf_s("%d", &led);
	data = 0x01 << (led - 1); //입력한 led 의 위치에 따라서 켜지게끔 8비트 0000 0001을 왼쪽으로 이동시키는거임 만약 1이면 이동할 필요가 없고 3이면 두번 이동시키면 0000 0100이 되니까
	printf("하드웨어에 보낼 값 = 0x%02X\n", data); //이거 0x는그냥 문자그대로고 %뒤부터 형식지정인데 %뒤로부터 0은 빈자리를 0으로 채움 2는 최소 2자리 X는 16진수 대문자로 출력 양식임 %X 이게 16진수 출력

	return 0;
}
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	double x,y,z,PI;
	printf("반지름을 입력하시오:");
	scanf_s("%lf", &x);
	PI = 3.141592;
	y = 4.0 * PI * (x * x);
	z = 4.0 / 3.0 * PI * (x * x * x);
	printf("표면적: %.6lf\n", y);
	printf("부피: %.6lf\n", z);
	return 0;
}*/
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	double x;
	printf("x의 값을 입력하시오:");
	scanf_s("%lf", &x);

	printf("다항식의 값은 %.3lf입니다", 3 * (x * x* x) -7 * (x*x) + 9);
	return 0;
}
//부가로 문자 a같은걸 입력했을때 그냥 출력에서 %d해주면 아스키코드로 출력이된다 %c를 하면 문자로 출력되고