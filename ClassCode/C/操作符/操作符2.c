#define _CRT_SECURE_NO_WARNINGS 1
#include<cc.h>
//int main()
//{
//	char a = 0x41;
//	char b = 0xFF;//0xFF -> 255  11111111
//	int c = 0xb6000000;
//	if (a == 0x41) {//正数原码补码一致，整型提升补码不变
//		printf("a\n");
//		printf("%d %c\n", a, a);
//	}
//	if (b == 0xFF) {
//		printf("b\n");
//	}
//	//在判断 b==0xFF 时 要对b进行整型提升
//	//b  11111111  ->   11111111  11111111  11111111  11111111  而 0xEF的补码依然是11111111 所以这两个补码时不同的
//	printf("%d %c\n", b, b);
//	//输出时 依然要对b进行整型提升 
//	// 11111111 -> 补码：11111111  11111111  11111111  11111111 
//	//反码：11111111  11111111  11111111  11111110
//	//原码：10000000  00000000  00000000  00000001  即：-1
//	if(c==0xb6000000)
//		printf("c\n");
//	return 0;
//}
//int main() {
//	char c = 1;
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(+c));
//	printf("%d\n", sizeof(!c));
//}
//int main() {
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(unsigned int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(unsigned long));//4
//	printf("%d\n", sizeof(long long int));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(long double));//8
//}
//int main() {
//	double a = 3.14;
//	int b = 0;
//	printf("%d\n", sizeof(b = a));
//	printf("%d\n", b);
//}
//int main() {
//	int i = 1;
//	if (i-- && ++i)
//		printf("!");
//	if (i + --i)
//		printf("?");
//}
