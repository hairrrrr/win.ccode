#define _CRT_SECURE_NO_WARNINGS 1
#include<cc.h>
//int main() {
	//unsigned int i = 1;
	//printf("%u", i<<31);//注意输出格式
	//printf("%d", sizeof(int*));
//	int a = 10;
//	short s = 5;
//	s = a ;
//	printf("%d", sizeof(s));
//}
//void test(char ch[]) {
//	printf("%d\n", sizeof(*ch));
//	printf("%d\n", sizeof(ch));
//}
//int main() {
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(ch[0]));
//	printf("%d\n", sizeof(ch));
//	test(ch);	
//}
//int main() {
//	int a = 10;
//	int b = 5;
//	printf("%d\n", a & b);
//	printf("%d\n", a && b);
//}
//int main() {
//	int i = 0;
//	int a = 0, b = -1, c = 2, d = 3;
//	i = a++ || ++b || d++;
//	printf("a = %d b = %d c = %d d = %d", a, b, c, d);
//}
//int main() {
//	//思考：
//	int a = 0; 
//	int b = 1, c = 2;
//	a = (a = b, b += c, c--);
//	printf("case1:%d\n", a);
//
//	a = 0,b = 1, c = 2;
//	a = (a < 0, a++, b = a);
//	printf("case2:%d\n", a);
//
//	a = 0, b = 1, c = 2;
//	a = (a<0, b<a);
//	printf("case3:%d\n", a);
//
//	a = 0, b = 1, c = 2;
//	if (a = b + 1, c = a / 2 - 1, c == 0)
//		printf("case4:%d\n", c);
//	}
//int main() {
//	//一般情况
//	a = get_val();
//	count_val(a);
//	while (a > 0) {
//		//业务处理
//		a = get_val();
//		count_val(a);
//	}
//	//应用逗号表达式
//	while (a = get_val(), count_val(a), a > 0) {
//		//业务处理
//	}
//}
