#include<stdio.h>

int numberOfLetter(const char str[]) {

	int i;
	int num = 0;
	int all_Letter[256] = { 0 };
	//����һ����СΪ���� ASCII �ַ���������С������
	//�� �����±� �� �ַ���Ӧ�� ASCII ��ֵ һһ��Ӧ

	while (*str) {
		
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))//ɸѡ��ĸ
			all_Letter[*str] = 1;

		++str;
	}

	for (i = 0; i < 256; i++)
		num += all_Letter[i];

	return num;
}

int main(void) {

	char str[100];
	int letterNum;

	printf("Enter a string: ");
	scanf("%s", str);

	letterNum = numberOfLetter(str);

	printf("The string %s has %d different letters.\n", str, letterNum);

	return 0;
}
