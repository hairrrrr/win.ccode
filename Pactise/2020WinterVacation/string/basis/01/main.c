

#include<stdio.h>


int main() {

	printf("Hello, \  
World");
		return 0;
}

#include<string.h>

int main() {

	int i = 0;

	char* str1 = "Hello World";
	char* str2 = "Hello World";

	printf("%p\n", &i);
	printf("%p\n%p\n", str1, str2);

	str1[0] = 'B';

	printf("%s\n%s\n", str1, str2);

	return 0;
}

int main() {

	char* str1[4];
	char* str2[4];

	scanf("%s", str1);
	scanf("%s", str2);

	printf("%s##%s", str1, str2);

	return 0;
}

int main() {

	char* str1[4];
	char* str2[4];

	scanf("%s", str1);
	scanf("%s", str2);

	printf("%s##%s", str1, str2);

	return 0;
}

int main() {

	char buffer1[100] = "";
	char buffer2[] = "";

	printf("%c  %d\n", buffer1[0], sizeof(buffer1));
	printf("%c  %d\n", buffer2[0], sizeof(buffer2));

	return 0;
}

int main() {

	char Str1[10] = "Hello";
	char Str2[10];
	char Str3[10];
	char Str4[10];
	char Str5[10] = "World";

	char* ptr[10];

	char* str1[5] = {Str1, Str2, Str3, Str4, Str5};
	char str2[5][10] = {
	          "Hello",//ע��д����
	           "",
	           "",
			   "",
	           "World"};

	str1[1] = " Goodbye";
	//str2[1] = " Goodbye";//�������ʽ�����ǿ��޸ĵ���ֵ
	scanf("%s", str2[1]);
	
	ptr++;//����ָ���ǳ��������ܸı�

	printf("%s", str1[0]);
	printf("%s\n", str1[4]);
	printf("%s ", str2[0]);
	printf("%s\n", str2[4]);

	printf("%d\n", sizeof(str1));
	printf("%d", sizeof(str2));

	return 0;
}

int main() {

	char* str[12] = {	"January",	"February",	"March",	"April",	"May",	"June",	
		"July",	"August",	"September",	"October",	"November",	"Decenmber",
	};
	int month = 0;

	while (1) {
		printf("input a month\n");
		scanf("%d", &month);

		if (month >= 1 && month <= 12)
			printf("%s\n", str[month - 1]);
		else
			printf("invalid input\n");
	}

	return 0;
}


ָ��  ָ���ʾ�ĺ���
-a      add�ӷ�
-m      minus����
-t      time�˷�
-d	  divide����
�����ʽ�������� 1 + 1:
main.exe -a 1 1 //ע��ÿ������֮��Ҫ�пո�

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
	
	//���һ��������������Ҫ4����������ִ�г���ָ�����������
	if (argc != 4) {
		printf("invalid input!\n");
		return 0;
	}
	//atoi�������Խ��ַ���ת��Ϊ����
	//��Ϊ��������Ĳ�������Ϊ�ַ���
	int num1 = atoi(argv[2]);
	int num2 = atoi(argv[3]);
	
	//strcmp�����Ƚ������ַ����Ƿ���ͬ����ͬ����0
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

if () {
	;
}
if () {
	;
}
if () {
	;
}
else {
	;
}
��
if () {
	;
}
else if () {
	;
}
else if () {
	;
}
else {
	;
}
������

int main() {

	int a = 5;
	
	if (a > 0)
		printf("a > 0\n");
	if (a > 2)
		printf("a > 2\n");
	if (a > 4)
		printf("a > 4\n");
	if (a > 5)
		printf("a > 5\n");
	else
		printf("a < 5\n");

	return 0;
}
���
a > 0
a > 2
a > 4
a < 5

int main() {

	int a = 0;
	
	if (a > 0)
		printf("a > 0\n");
	else if (a > 2)
		printf("a > 2\n");
	else if (a > 4)
		printf("a > 4\n");
	else if (a > 5)
		printf("a > 5\n");
	else
		printf("a < 5\n");

	return 0;
}
���
a > 0

