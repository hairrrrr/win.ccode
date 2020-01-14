#define _CRT_SECURE_NO_WARNINGS 1
/*本题要求编写程序读入N个学生的百分制成绩，统计五分制成绩的分布。百分制成绩到五分制成绩的转换规则：

大于等于90分为A；
小于90且大于等于80为B；
小于80且大于等于70为C；
小于70且大于等于60为D；
小于60为E。

输入格式 :
输入在第一行中给出一个正整数N（≤1000），即学生人数；第二行中给出N个学生的百分制成绩，其间以空格分隔。

输出格式 :
在一行中输出A、B、C、D、E对应的五分制成绩的人数分布，数字间以空格分隔，行末不得有多余空格。*/
#include<stdio.h>
#include<string.h>
int main() {
	int Anum = 0;
	int Bnum = 0;
	int Cnum = 0;
	int Dnum = 0;
	int Enum = 0;
	int num = 0;
	int i = 0;
	int sco[100] = { 0 };
	printf("Input the Num of student\n");
	scanf("%d", &num);
	
	printf("Input scores of all students(like A B C ...)\n");
	for (i = 0; i < num; i++) {
		scanf("%d", &sco[i]);
		switch (sco[i] / 10) {
			case 10:
			case 9:
				Anum++;
				break;
			case 8:
				Bnum++;
				break;
			case 7:
				Cnum++;
				break;
			case 6:
				Dnum++;
				break;
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:
				Enum++;
				break;
			default:
				break;
		}
	}
	printf("%d  %d  %d  %d  %d\n", Anum, Bnum, Cnum, Dnum, Enum);
}
