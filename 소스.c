// ���ڵ��� �з��ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNING
#include<stdio.h>

int main()
{
	char input;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &input);

	if (input >= 'A' && input <= 'Z') // �빮�� A���� Z���� �����ؼ� ���̸� ���
	{
		printf("�빮�� %5c�Դϴ�.\n", input); // �������� ��µǴ� ������ �տ� ���� 5���� �ڸ��� ��
	}
	else if (input >= 'a' && input <= 'z') // �ҹ��� a���� z���� �����ؼ� ���̸� ���
	{
		printf("�ҹ��� %5c�Դϴ�.\n", input);
	}
	else if (input >= '0' && input <= '9') // ���� 1���� 9�����̸� ���
	{
		printf("%5c�� ���� �Դϴ�.\n", input);
	}
	else
	{
		printf("���ڰ� �ƴմϴ�.");
	}

	return 0;
}