#define _CRT_SECURE_NO_WARNINGS 1
#include<cc.h>
//int main()
//{
//	char a = 0x41;
//	char b = 0xFF;//0xFF -> 255  11111111
//	int c = 0xb6000000;
//	if (a == 0x41) {//����ԭ�벹��һ�£������������벻��
//		printf("a\n");
//		printf("%d %c\n", a, a);
//	}
//	if (b == 0xFF) {
//		printf("b\n");
//	}
//	//���ж� b==0xFF ʱ Ҫ��b������������
//	//b  11111111  ->   11111111  11111111  11111111  11111111  �� 0xEF�Ĳ�����Ȼ��11111111 ��������������ʱ��ͬ��
//	printf("%d %c\n", b, b);
//	//���ʱ ��ȻҪ��b������������ 
//	// 11111111 -> ���룺11111111  11111111  11111111  11111111 
//	//���룺11111111  11111111  11111111  11111110
//	//ԭ�룺10000000  00000000  00000000  00000001  ����-1
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
