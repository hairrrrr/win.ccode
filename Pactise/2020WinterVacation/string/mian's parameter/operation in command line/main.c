//ָ��  ָ���ʾ�ĺ���
//-a      add�ӷ�
//-m      minus����
//-t      time�˷�
//-d	  divide����
//�����ʽ�������� 1 + 1:
//main.exe -a 1 1 //ע��ÿ������֮��Ҫ�пո�

#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]) {

	//���һ��������������Ҫ4����������ִ�г���ָ�����������
	if (argc != 4) {
		printf("invalid input!\n");
		return 0;
	}
	int num1 = atoi(argv[2]);
	int num2 = atoi(argv[3]);

	if (strcmp(argv[1], "-a") == 0)
		printf("%d", num1 + num2);
	else if (strcmp(argv[1], "-m") == 0)
		printf("%d", num1 - num2);
	else if (strcmp(argv[1], "-t") == 0)
		printf("%d", num1 * num2);
	else if (strcmp(argv[1], "-d") == 0) {
		if (num2 == 0)
			printf("Divisor cannot be 0\n");
		else
			printf("%d", num1 / num2);
	}
	else
		printf("invalid input\n");

	return 0;
}