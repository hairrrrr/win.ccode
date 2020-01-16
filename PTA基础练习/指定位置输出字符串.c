#define _CRT_SECURE_NO_WARNINGS 1
/*本题要求实现一个函数，对给定的一个字符串和两个字符，
打印出给定字符串中从与第一个字符匹配的位置开始到与第二个字符匹配的位置之间的所有字符。
函数接口定义：
char *match( char *s, char ch1, char ch2 );
函数match应打印s中从ch1到ch2之间的所有字符，并且返回ch1的地址。
输入样例1：
program
r g
输出样例1：
rog
rogram
输入样例2：
program
z o
输出样例2：
(空行)
(空行)
输入样例3：
program
g z
输出样例3：
gram
gram
*/
#include<stdio.h>
#include <stdio.h>

#define MAXS 10

char* match(char* s, char ch1, char ch2);
int main()
{
	char str[MAXS], ch_start, ch_end, * p;
	scanf("%s\n", str);
	scanf("%c %c", &ch_start, &ch_end);
	p = match(str, ch_start, ch_end);
	printf("%s\n", p);
	return 0;
}
/* 你的代码将被嵌在这里 */
char* match(char* s, char ch1, char ch2) {
	char* Ch1 = 0;
	int flag = 1;
	while (*s++!= '\0') {
		if (*s == ch1) {
			Ch1 = s;
			while (*s != ch2 && *s != '\0') {//如果ch2没有找到防止字符串s溢出
				printf("%c", *s);
				flag = 0;
				s++;
			}
			if (*s != '\0')
				printf("%c", ch2);
			printf("\n");
			break;//防止后面再出现ch1，会再进入循环（题目要求不）
		}
	}
	if (flag)//如果没有进入循环再打一个空行（题目要求）
		printf("\n");
	return Ch1;
}
