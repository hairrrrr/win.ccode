//字符常量可以做下标吗？
//经过我的测试，答案是可以的

//那么我们可以通过这一点，快速的统计一组字符串中26个字母的出现次数

#include<stdio.h>

int main() {

	int count[255] = { 0 };
	char ch;
	int i = 0;

	//'A' 65; 'Z' 90; 'a'97; 'z'122

	while (1) {
		ch = getchar();
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
			count[ch]++;
		if (ch == '*')//设置 * 为计数结束标志
			break;
	}

	for (i = 'A'; i <= 'Z'; i++) {
		if (count[i] != 0)
			printf("%c: %d \n", i, count[i]);
	}
	for (i = 'a'; i <= 'z'; i++) {
		if (count[i] != 0)
			printf("%c: %d n", i, count[i]);
	}

	return 0;
}


