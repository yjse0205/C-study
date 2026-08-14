#include <stdio.h>
#include <Windows.h>
/*
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int status = 0x6f;  //비트 상태인데 여기에 뭐가 들어가든 0x01이랑 and연산자 &이거되면 0000 0001이 된다.그래서 문열림상태에선 비트가 1이됨
	printf("문열림 상태=%d\n", (status&0x01));
	return 0;
}
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int price;
	double sale;
	printf("상품 가격을 입력하시오: ");
	scanf_s("%d", &price);
	printf("할인율을 입력하시오: ");
	scanf_s("%lf", &sale);
	printf("할인된 가격은 %.2lf원입니다", (price - price * sale / 100.0));
	return 0;
}
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	double a, b;
	printf("두개의 실수를 입력하시오");
	scanf_s("%lf %lf", &a, &b);
	printf("합의 정수부=%d\n", (int)(a + b));
	return 0;
}
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int num, n;
	printf("숫자를 입력하시오:");
	scanf_s("%d", &num);
	printf("n을 입력하시오:");
	scanf_s("%d", &n);
	printf("새로운 값=%d\n", (1 << n) | num); //n번째 비트를 1로 설정하는건데 num이 9 n이2 면 0000 0001에서 2번 이동 0000 0100 | 0000 1001 => 0000 1101로 13 num9의 2번째 비트가 1로 바뀜
	return 0;
}

//여기서 부터 조건문
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	//조건 연산자 absolute_value=(x>0)?x:-x; //x가 0보다 크면 x를 반환하고 아니면 -x를 반환한다. (절대값 반환)
	//big=(a>b)?a:b; //a가 b보다 크면 a를 반환하고 아니면 b를 반환한다. (최대값 반환)
	//small=(a<b)?a:b; //a가 b보다 작으면 a를 반환하고 아니면 b를 반환한다. (최소값 반환)
	int num;
	printf("정수를 입력하시오:");
	scanf_s("%d", &num);

	if ((num >= 0) && (num <= 100))
		printf("입력한 정수가 0에서 100사이에 있습니다.");
	else
		printf("입력한 정수가 0에서 100사이에 없습니다.");
	return 0;
}
//반복문 쪽은 elif가 else if로 빼곤 동일
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int month;
	int days;
	printf("월을 입력하시오: ");
	scanf_s("%d", &month);
	switch (month) {
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case 8:
	case 10:
	case 12:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d월은 %d일입니다.", month, days);
	return 0;
	
}*/
int main(void) {                    //만들어봤는데 되네
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int math, phy, chme;
	printf("수학,물리,화학 점수를 입력하시오: ");
	scanf_s("%d %d %d", &math, &phy, &chme);
	if (math >= 50 && phy >= 50 && chme >= 50) {
		printf("1차 합격입니다.\n");
		if ((math + phy) >= 150 || (math + chme) >= 150)
			printf("2차 합격입니다.");
		else
			printf("2차 불합격입니다.");
		}
	else
		printf("1차 불합격입니다.");
	return 0;
}