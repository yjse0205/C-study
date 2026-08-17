#include <stdio.h>
#include <windows.h>
//배열에 출석 기록하기
#define SIZE 16
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	//파이썬으로 보면 리스트인데 자료형을 선언해야하는게 다른듯 또한 #define 배열 크기 이런식으로 우선 선언한뒤에 만들어줘야함
	int att_book[SIZE] = { 0 }; //출석부 배열 초기화
	int count = 0;
	for (int i = 0;i < SIZE;i++) {
		printf("%d번째 강의 출석 여부를 입력하세요(1:출석, 0:결석): ", i + 1);
		scanf_s("%d", &att_book[i]);
	}
	for (int i = 0;i < SIZE;i++) {//이게 이게 결석횟수를 count에 넣어두는거임
		if (att_book[i] == 0)
			count++;
	}
	//30%이상이면 학점이 나가지 않는걸 해야함
	if ((double)count / SIZE >= 0.3) {
		printf("수업일수 부족입니다.(%lf%%)", (double)count / SIZE * 100);	
	}
	return 0;
}
#define SIZE 10
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int price[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
	int minimum = price[0];
	int maximum = price[0];  //파이썬이랑은 다르게 얘네는 각각 해줘야 선언이 제대로 됨 int x,y=0,0;이런거 안됨
	printf("[");
	for (int i = 0;i < SIZE;i++) {
		printf("%d", price[i]);
	}
	printf("]\n");
	for (int i = 0;i < SIZE;i++) {
		if (price[i] < minimum)
			minimum = price[i];
		if (price[i] > maximum)
			maximum = price[i];
	}
	printf("최소값은 %d입니다.", minimum);
	return 0;
}
int main(void) { //다차원 배열
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int i, j;
	int a[3][5] = { {0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4} };
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 5;j++) {
			printf("a[%d][%d]=%d", i, j, a[i][j]);
		}
		printf("\n");
	}
	return 0;
}