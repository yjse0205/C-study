#include<stdio.h>
#include<windows.h>
/*
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	//포인터는 메모리 주소를 가지고 있는 변수다
	//int number=10; //정수형 변수 number를 선언하고 10으로 초기화
	//int *p; ==> 포인터 p의 선언
	//p=&number; ==> 포인터 p에 number의 주소를 저장 &이게 주소가르키는거
	int number = 10;
	int* p;

	p = &number; //p에 number 주소 저장
	printf("number의 값: %d\n", number);

	*p = 20; //기존의 p에 number주소가 저장되어있는데 *p로 그 주소의 값을 가져와서 바꿈
	printf("number의 값: %d\n", number);

	return 0;
}
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	printf("증가 전 pc = %d, pi=%d, pd=%d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("증가 후 pc=%d, pi=%d, pd=%d", pc, pi, pd);
	return 0;
}
void modify(int value) {
	value = 99; //여기서 매개변수 value를 99로 설정
}
int main(void){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int number = 1;
	
	modify(number); //근데 여기서 변수 number를 전달함 하지만 값은 1로 그대로
	//c언어는 값에의한 호출이 원칙
	printf("nubmer=%d\n", number);

	return 0;
}
void modify(int* ptr) { //이 void자체가 결과를 리턴할 이유가없음 주소를 바꾸거나 하면 그냥 밖에서 호출하면 바뀐대로 나오니까
	*ptr = 99; // *이 붙으면 그 주소에있는 값을 바꿔라 없으면 그 주소를 바꿔라
}
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int number = 1;

	modify(&number); //여기서 &number의 주소값이 ptr에 들어감
	printf("number=%d\n", number);
	return 0;
	//int*ptr이게 매개변수이면서 포인터변수 선언임
	//&nubmer이게 주소를 넘기면서 modify의 ptr에 주소를 넘김 그래서 ptr이 number의 주소를 가짐==> ptr=&number
	//근데 modify가 *ptr=99를 함 ptr안에number주소가 들어갔고 그럼 nubmer의 주소값에 99를 넣게됨
}
//swap() 함수 작성하기
void swap(int* px, int* py);  //이게 정수형 포인터변수 선언함
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a = 100, b = 200;

	printf("swap()호출 전 a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("swap()호출 후 a=%d b=%d\n", a, b);
	return 0;
}
void swap(int* px, int* py); {
	int tmp; //tmp는 그냥 일반변수라 주소를 따질게 아님

	tmp = *px; //이게 tmp *px의 값을 넣고
	*px = *py; //이게 *px의 값을 *py에 넣고
	*py = tmp; //이게 *py의 값을 tmp넣는다? //여기선 포인터의 초기화는 swap(&a,&b)를 넣을때 초기값이 a,b의 주소로 들어간상태
}
//포인터는 기존의 초기값을 정의가 필요하고 포인터자료형과 변수의 자료형은 일치해야함
//배열과 포인터
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a[] = { 10,20,30,40,50 };
	
	printf("배열의 이름=%u\n", a);
	printf("첫번째 원소의 주소=%u\n", &a[0]);

	return 0;
}
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a[] = { 1020,30,40,50 };
	int* p;

	p = a; //배열이름 a는 대부분 주소로 작동된다. 포인터 변수 p안에 a의 주소를 넣는다.
}*/
//유용한 배열함수
#define SIZE 5
double get_array_avg(int values[], int n);
void printf_array(int values[], int n);

int main(void) {
	int i;
	int data[SIZE] = { 10,20,30,40,50 };
	double result;

	printf_array(data, SIZE);
	result = get_array_avg(data, SIZE); //호출하면 10,20,30,40,50의 배열이 values로 
	printf("배열 원소들의 평균 =%f\n", result);
	return 0;
}
double get_array_avg(int values[], int n) { 
	int i;
	double sum = 0.0;
	printf("get_array_avg()호출\n");
	for (i = 0;i < n;i++)
		sum += values[i];
	return sum / n;
}
void printf_array(int values[], int n) { //0,1,2,3,4번째 까지 반복하면서 values안에 들어간 data의 원소들을 []묶어서 출력시킴
	int i;
	printf("\[ ");
	for (i = 0;i < n;i++)
		printf("%d ", values[i]);
	printf(" ]\n");
} //// data 배열을 넘기면 data[0]의 주소가 values로 전달됨
// values[i]를 이용하면 원래 data[i]에 접근할 수 있음 그럼 data[0]의 주소만 전달이 된거지만 배열은 연결되어있기에 시작이랑
//끝만 알면 됨 그래서 SIZE로 배열의 끝을 지정해주고 data[0]으로 시작 주소를 전달시켜준거임