//写一个程序，输入数量不确定的【0 ~ 9】范围内的整数，统计每一种数字出现的次数，输入 -l 表示结束

//思路：我们不需要记录数组每一个元素，只需要设置变量记录他们出现的次数即可。
//0~9 的连续数我们可以设置数组来存储，方便快捷

#include<stdio.h>

int main() {

	const int number = 10;//记录数组元素。用const修饰，数组大小规定后不可改变
	int count[10] = { 0 };
	int i = 0;
	char ch;
	int error = 0;

	//方法1：
	//while (1) {
	//	ch = getchar();
	//	switch (ch) {
	//		case '0':
	//			count[0]++;
	//			break;
	//		case '1':
	//			count[1]++;
	//			break;
	//		case '2':
	//			count[2]++;
	//			break;
	//		case '3':
	//			count[3]++;
	//			break;
	//		case '4':
	//			count[4]++;
	//			break;
	//		case '5':
	//			count[5]++;
	//			break;
	//		case '6':
	//			count[6]++;
	//			break;
	//		case '7':
	//			count[7]++;
	//			break;
	//		case '8':
	//			count[8]++;
	//			break;
	//		case '9':
	//			count[9]++;
	//			break;
	//		default:
	//			if (ch != '-' && ch != 'l' && ch != ' ')
	//				error++;//记录错误的输入
	//			break;
	//	}

	//更简单的方法：
	while(1){
		ch = getchar();
		if (ch >= '0' && ch <= '9')
			count[ch - '0']++;
		if (ch == '-') {
			ch = getchar();
			if (ch == 'q')
				break;
			else 
				printf("wrong input!\nDo you mean '-q' ?\n");
		}
		if(ch != ' ')
			error++;
	}

	for (i = 0; i < 10; i++) {
		printf("%d：%d times\n", i, count[i]);
	}
	printf("wrong input %d times\n", error);
	
	return 0;
}
