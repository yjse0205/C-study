#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
/*
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	//기본적으로 문자열의 끝엔 무조건 NULL인 \0이 무조건 필요함
	//문자열 전처리하기

	char line1[100] = "";
	char line2[100] = "";

	printf("문자열을 입력하시오:");
	gets_s(line1, sizeof(line1)); //이게 내가 입력한 문자열을 공백까지 포함해서 한줄을 가져오는거
	//sizeof는 이 변수나 그런게 메모리에서 몇바이트를 차지하냐는걸 알려주는거고
	//gets_s(line1) 여기까지가 내가 입력한 문자열을 라인1에 받겠다
	//뒤의 sizeof(line1)이 line1의 크기를 알려주고 그 이상으론 받지말라는걸 알려주는거

	int k = 0;
	for (int i=0;line1[i] != '\0';++i) {
		while (line1[i] >= 'A' && line1[i] <= 'z') {
			line2[k++] = line1[i++];
		}
	}
	line2[k] = '\0';
	printf("출력 문자열:%s", line2);
	return 0;
}
//getchar()=하나의 문자를 받아서 반환 버퍼사용
//putchar()=하나의 문자를 받아서 출력
//_getch()= 하나의 문자를 받아서 반환 버퍼사용 x
//putch()= 하나의 문자를 받아서 출력

int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int ch;  //int는 단 하나의 문자만 받을 수 있음
	ch = getchar(); //이건 getchar내가 입력한 문자를 ch에 반환시키는거
	putchar(ch);  //이건 putchar ch에 저장된 문자를 출력시키는거

	return 0;
}

//~~사용자로부터 패스워드 입력받기
#include <conio.h>
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char password[9]; //char password[9]=""이걸로 해버리면 for문이 실행이안됨 그럼 for문 조건이 달라져야됨
	int i;

	printf("패스워드를 입력하시오:");
	for (i = 0;i<8;i++) {    //기존 조건이 password[i] !='\0' 이였음
		password[i] = _getch();
		printf("*");
		if (password[i] == '\r')
			break;
	}
	password[i] = '\0';
	printf("\n입력된 패스워드는 다음과 같습니다:%s", password);
	return 0;
}
//엔터를 눌렀는데 종료가 안된다. if를 넣어서 종료를 만들기


//~~문자열 라이브러리 함수
#include<string.h>
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	//strlen(s)=문자열 s의 길이를 구한다
	//strcpy(s1,s2) s2를 s1에 복사한다
	//strcat(s1,s2) s2를 s1의 끝에 붙여넣는다 -->s1의 공간이 충분해야함
	//strcmp(s1,s2) s1과 s2를 비교한다
	char s[] = "abcdefgh";
	int len = strlen(s);
	printf("문자열 %s의 길이=%d\n", s, len);
	return 0;
}

//~~문자열비교
int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char s1[80];
	char s2[80];
	int result;

	printf("첫번째 단어를 입력하시오:");
	scanf_s("%s", s1, sizeof(s1));
	printf("두번째 단어를 입력하시오:");
	scanf_s("%s", s2, sizeof(s2));

	result = strcmp(s1, s2); //얘는 값이 0이면 동일 사전식 정의임 
	//만약 s1이 a로시작하고 s2가 b로 시작하면 a가 b보다 앞에있으니까 s1이 더 작다고 보고 음수
	//만약 s1이 b로 시작하고 s2가 a로 시작하면 b가 a보다 뒤에있으니까 s1이 더 크다고 보고 양수
	if (result > 0)
		printf("%s가 %s보다 뒤에 있습니다.", s1, s2);
	else if (result < 0)
		printf("%s가 %s보다 앞에 있습니다.", s1, s2);
	else
		printf("%s와 %s가 같습니다.", s1, s2);
	
	return 0;
}*/

//문자열<->수치로 변환

int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	const char s[] = "100";
	char t[100] = "";
	int i;

	printf("%d \n", atoi("100")); //atoi()는 문자열 "100"을 정수 100으로 바꾸는거
	sscanf(s, "%d", &i);  //문자열 "100"을 정수 100으로 i에 저장
	sprintf(t, "%d", 100); //정수 100을 문자열 "100"으로 t에 저장
	return 0;
}