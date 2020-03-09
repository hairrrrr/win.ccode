#include<stdio.h>

int numberOfLetter(const char str[]) {

	int i;
	int num = 0;
	int all_Letter[256] = { 0 };
	//创建一个大小为常用 ASCII 字符集数量大小的数组
	//将 数组下标 与 字符对应的 ASCII 码值 一一对应

	while (*str) {
		
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))//筛选字母
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
