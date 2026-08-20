#include <stdio.h>
#include <windows.h>
//온도변환함수
/*double FtoC(double temp_f); //이게 함수 원형선언인데 나중에 코드가 길어질 경우에 쉽게보기 위해서 필요한거임 main위에서 미리 정의를 다 하면 상관없는데 그럼 코드가 길때 보기힘듦

int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	double c, f;

	printf("화씨온도를 입력하시오: ");
	scanf_s("%lf", &f);

	c = FtoC(f);

	printf("화씨온도 %.2lf는 섭씨온도 %.2lf에 해당한다.", f,c);
}
double FtoC(double temp_f) {
	double temp_c;
	temp_c = (temp_f - 32) / 1.8;
	return temp_c;
}
int check_prime(int n);

int main(void) { //소수의 합 찾기
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int n, flag = 0;
	printf("양의 정수를 입력하시오: ");
	scanf_s("%d", &n);

	for (int i = 2;i < n;i++) {
		if (check_prime(i) == 1) {  //얘는 int i가 소수냐 검사 만약 소수면 아래로
			if (check_prime(n - i) == 1) {  //이제 얘는 만약 n이 10이라고 가정하면 8이 소수냐 검사 아니니까 다시 위로 그럼 i=3이 나오고 그때 7로 소수만족
				printf("%d=%d+%d\n", n, i, n - i); //그럼 얘는 10=3+7로 출력하는거
				flag = 1;
			}
		}

	}
	if (flag == 0)
		printf("%d는 소수들의 합으로 표시될 수 없습니다.", n);
	return 0;
}
int check_prime(int n) {
	int is_prime = 1;  //이게 소수라고 가정을 해두는거임
	for (int i = 2;i < n;++i) {
		if (n % i == 0) {
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}
//정적 지역변수 static int static_count=0; 이라고 선언하면 얘는 누적이됨
//로또 프로그램
#include<time.h>
#define MAX 45
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int i,k;
	int lotto[6] = { 0 };  //얘가이제 난수로 뽑고나서 들어가야되는곳 lotto의 배열에 0~5번까지 0으로 초기화
	int dup_check[MAX + 1] = { 0 }; //애는 1~45까지의 배열이 생기고 그걸 0으로 초기화
	srand(time(NULL));
	for (i = 0;i < 6;i++) { //i는 0부터 5까지 k에 1~45까지의 번호를 랜덤으로 생성
		k = 1 + (rand() % MAX); //
		while (dup_check[k] == 1)  //얘는 k라는 숫자를 뽑은상태에서 dup_check에 이 k라는 숫자가 또 있냐는 검사고 있으면 1인거
			k = 1 + (rand() % MAX);  //그래서 1이 나온다면 계속해서 k를 뽑아주고 dup_check[k]==1이 아닐때 까지 반복
		lotto[i] = k; //1이 아니게 된 상태에서 lotto[i]번째에 k라는 랜덤난수 넣어주고
		dup_check[k] = 1; //얘는 이제 이미 뽑은 숫자라는걸 표현하기 위해
		printf("%d ", lotto[i]);
	}
	return 0;
}
#include <time.h>

int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int computer, user;

	srand(time(NULL));

	while (1)
	{
		computer = rand() % 2;   // 0 또는 1

		printf("앞(0) 또는 뒤(1)를 선택하시오(종료는 -1): ");
		scanf_s("%d", &user);

		if (user == -1)
			break;

		if (user == computer)
			printf("맞췄습니다!\n");
		else
			printf("틀렸습니다. 정답은 %d입니다.\n", computer);
	}

	return 0;
}*/
#include <time.h>
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(NULL));
	int user[3] = { 0 };
	int computer[3] = { 0 };
	int sum1, sum2;
	sum1 = 0;
	sum2 = 0;
	for (int i = 0;i < 3;i++) {
		computer[i] = 1 + rand() % 6;
		user[i] = 1 + rand() % 6;

		sum1 += computer[i];
		sum2 += user[i];
	}
	printf("사용자 주사위: ");
	for (int i = 0;i < 3;i++) {
		printf("%d ", computer[i]);
	}
	printf("\n컴퓨터 주사위: ");
	for (int i = 0;i < 3;i++) {
		printf("%d ", user[i]);
	}
	printf("\n사용자 합계: %d\n", sum2);
	printf("컴퓨터 합계: %d\n", sum1);

	if (sum1 > sum2)
		printf("컴퓨터승리");
	else if (sum1 < sum2)
		printf("사용자 승리");
	else
		printf("무승부");
	
	return 0;
}