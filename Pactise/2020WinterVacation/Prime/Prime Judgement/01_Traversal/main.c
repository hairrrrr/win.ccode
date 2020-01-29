//方法1-1：稍微动动脑
//思想：根据素数的定义思考。素数是大于1的自然数，除了1和自身外，其他数都不是它的因子。
//      
//	  那我们就可以用一个循环，从2开始遍历到这个数减去1，如果这个数都不能被整除，那么这个数就是素数。
//	  也就是说：
//	  给定一个数 n , i 从 2 开始取值，直到 n - 1(取整数),如果 n  %  i != 0 , n 就是素数
//	  
//	  进一步思考，有必要遍历到 n - 1 吗？
//	  除了1以外，任何合数最小的因子就是2，那最大的因子就是 n/2
//	  那我们就遍历到 n/2就足够了

//#include<stdio.h>
//
//void testPrime();
//int isPrime(int target);
//
//int main() {
//
//	testPrime();
//	return 0;
//}
//
//void testPrime() {
//
//	int target = 0;
//	int yes_or_no = 0;
//
//	printf("input a number \n");
//	scanf("%d", &target);
//
//	yes_or_no = isPrime(target);
//
//	if (yes_or_no == 1)
//		printf("YES\n");
//	else if (yes_or_no == 0)
//		printf("NOT\n");
//
//}
//
//int isPrime(int target) {
//
//	int i = 0;
//
//	if (target <= 1) {
//		printf("illegal input!\n");//素数定义
//		return -1;
//	}
//
//	for (i = 2; i < target / 2; i++) {
//		if (target % i == 0)
//			return 0;
//	}
//
//	return 1;
//}

//方法1-2：再进一步
//思想：在上面的基础上，其实不需要遍历到 n/2，只需要到 根号n（包含根号n） 就可以了。为什么呢？这是个数学问题，大家自行思考一下。

#include<stdio.h>
#include<math.h>

void testPrime();
int isPrime(int target);

int main() {

	testPrime();
	return 0;
}

void testPrime() {

	int target = 0;
	int yes_or_no = 0;

	printf("input a number \n");
	scanf("%d", &target);

	yes_or_no = isPrime(target);

	if (yes_or_no == 1)
		printf("YES\n");
	else if (yes_or_no == 0)
		printf("NOT\n");

}

int isPrime(int target) {

	int i = 0;

	if (target <= 1) {
		printf("illegal input!\n");//素数定义
		return -1;
	}

	for (i = 2; i <= sqrt(target); i++) {
		if (target % i == 0)
			return 0;
	}

	return 1;
}