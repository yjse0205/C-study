#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
/*
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	//do while문 일단 do의문장 실행 후 while의 조건식이	참이면 반복문을 실행하고 아니면 종료
	// if문과 do while문을 동시에 사용한느 예제
	int answer, guess, tries;
	tries = 0;
	srand((unsigned int)time(NULL));
	answer = rand() % 100; // 1~100 사이의 난수 생성 이거 왜 계속 같은값?
	do {
		printf("정수를 추측하여 보시오: ");
		scanf_s("%d", &guess);
		tries++;
		if (guess > answer)
			printf("다운\n");
		if (guess < answer)
			printf("업\n");  //매 실행마다 반복되어야하는 문장이라 do 문안에 들어가고
	} while (guess != answer);	 //이게 do while문의 조건임
	printf("축하합니다! %d번 만에 정답을 맞추셨습니다.", tries);
	return 0;
}
int main(void) { //for문
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	double money = 1.0;
	for (int i = 0;i <= 30;i++) {  //여기 i도 정의해줘야해서 int i
		money = money * 2;
		printf("%d일날 현재 금액=%lf\n", i, money);
	}
	printf("마지막 날의 돈: %lf\n", money);
	return 0;
}
int main(void) { //for문
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	double money = 1.0;
	for (int i = 0;i <= 30;i++) {  //여기 i도 정의해줘야해서 int i
		money = money * 2;
		printf("%d일날 현재 금액=%lf\n", i, money);
	}
	printf("마지막 날의 돈: %lf\n", money);
	return 0;
}  //자동으로 산수문제 내주는 프로그램
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand((unsigned int)time(NULL));
	int a, b, answer,guess;
//a = rand() % 100;
//b = rand() % 100; //이거 문제를 계속 자동으로 내는거라 얘도 반복문 안으로 들어가야함
//answer = a + b;
	printf("산수문제를 자동으로 출제합니다.\n");
	while (1) {
		a = rand() % 100;
		b = rand() % 100;
		answer = a + b;
		printf("%d+%d=", a, b);
		scanf_s("%d", &guess);
		if (guess == answer) {
			printf("맞았습니다.\n");
			break;
		}
		else
			printf("틀렸습니다.\n");
	}
	return 0;
}*/
int main(void) {
	//1부터 n까지의 모든 소수를 찾는프로그램
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,prime;
	printf("어디까지 찾을까요?:");
	scanf_s("%d", &x);

	for (int i = 2;i <=x;i++) {
		prime = 1;
		for (int b = 2; b<i; b++) {
			if (i % b == 0) {
				prime = 0;
				break;
			}
		}
		if (prime == 1)
			printf("%d, ", i);
	}
	printf("\n\n");
	return 0;
}