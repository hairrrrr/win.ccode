#define _CRT_SECURE_NO_WARNINGS 1

//分段函数
//
//Problem Description
//函数是一种特殊的映射，即数集到数集的映射。对于给定的每个自变量都能给出一个确定的值，这是一件多么牛的事情呀。其实不是函数牛，而是因为它具有这种性质我们的数学家才这么定义了它。函数有很多类型，虽然本质都是映射，但为了方便研究和应用，数学家们做了很多分类。比如线性函数，非线性函数，随机函数，还有一些具有特殊性质的函数等等。
//
//今天我们要关注的是分段函数，所谓分段就是对于整个定义域来说，函数的值域是不连续的。很明显的一个就是绝对值函数，类似于y = | x | , (x, y属于R)。不连续是按照自变量的连续变化函数值的变化不连续而已，但函数仍然不离不弃的给了每个自变量一个值。
//
//总之，函数就是按照规则对自变量进行操作得到相应的值。而程序里的函数就更牛了，它可以对我们的输入（自变量）进行各种我们想做的操作，最后得到输出（值），很好玩吧。
//
//今天，就希望你能用程序里的函数实现数学里的分段函数，加油哦。
//
//这个分段函数长得是这个样子的：
//
//F(x) = log2(x)       0 < x < 10
//
//	= | x | +sin(x)    x < 0
//	= 0                 x = 0
//	= x ^ 2            x >= 10
//
//
//	Input
//	输入第一行给出数据的组数T。
//	接下来T行每行一个实数X。
//
//
//	Output
//	输出T行，每行一个函数值，四舍五入保留到小数点后两位。
//	希望你能根据函数的表达式，对于给定的每个自变量不离不弃的计算出它的值。
//
//	Sample Input
//	4
//	0
//	10
//	5
//	- 1

//	Sample Output
//	0.00
//	100.00
//	2.32
//	0.16

#include<stdio.h>
#include<math.h>

double f(double x) {

	if (x >= 10)
		return x * x;
	if (x > 0)
		return log2(x);
	if (x == 0)
		return 0;
	if (x < 0)
		return fabs(x) + sin(x);

}

int main() {

	int T = 0;
	double X = 0;
	double result[10000];
	int i = 0;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%lf", &X);
		result[i] = f(X);
	}

	for (i = 0; i < T; i++)
		printf("%.2f\n", result[i]);

	return 0;
}

