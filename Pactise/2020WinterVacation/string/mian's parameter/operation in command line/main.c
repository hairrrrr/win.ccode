//指令  指令表示的含义
//-a      add加法
//-m      minus减法
//-t      time乘法
//-d	  divide除法
//输入格式，比如求 1 + 1:
//main.exe -a 1 1 //注意每个参数之间要有空格

#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]) {

	//完成一次两个数运算需要4个参数：可执行程序，指令和两个数字
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