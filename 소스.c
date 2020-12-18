// 문자들을 분류하는 프로그램
#define _CRT_SECURE_NO_WARNING
#include<stdio.h>

int main()
{
	char input;
	printf("문자를 입력하시오: ");
	scanf_s("%c", &input);

	if (input >= 'A' && input <= 'Z') // 대문자 A부터 Z까지 포함해서 참이면 출력
	{
		printf("대문자 %5c입니다.\n", input); // 보기좋게 출력되는 문자의 앞에 공백 5개의 자리를 둠
	}
	else if (input >= 'a' && input <= 'z') // 소문자 a부터 z까지 포함해서 참이면 출력
	{
		printf("소문자 %5c입니다.\n", input);
	}
	else if (input >= '0' && input <= '9') // 숫자 1부터 9까지이면 출력
	{
		printf("%5c는 숫자 입니다.\n", input);
	}
	else
	{
		printf("문자가 아닙니다.");
	}

	return 0;
}