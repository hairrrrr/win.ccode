#define _CRT_SECURE_NO_WARNINGS 1

//区域内点的个数

//Problem Description
//X晚上睡不着的时候不喜欢玩手机，也不喜欢打游戏，他喜欢数星星。
//
//Input
//多组输入。
//
//每组先输入一个整数N(N <= 10000)，接着输入两个点代表矩形的左下点B（x, y）和右上点T(x, y)，然后输入N个（X，Y）代表Ｎ颗星星。问有多少颗星星在窗子内部，在窗边上的不计。
//
//Output
//输出一个整数，代表有多少颗星星在窗子内部。
//
//Sample Input
//3
//0 1
//3 4
//1 1
//2 2
//3 3
//2
//1 1
//5 5
//4 4
//0 6
//Sample Output
//1
//1

#include<stdio.h>
#include<math.h>

int main() {

	int N = 0;
	int X1, Y1;
	int X2, Y2;
	int i = 0;
	int count = 0;

	printf("input the number of the coordinate you wang to judge\n");
	scanf("%d", &N);

	printf("input two counter-diagonal's coordinate(x,y)(format:0 1 ) \n");
	scanf("%d %d", &X1, &Y1);
	scanf("%d %d", &X2, &Y2);
	
	//N = 0 不输入坐标，内部的点自然是0。 小于0非法，认为也是0
	if (N > 0) {
		
		//横纵坐标之差大于等于2，坐标这个围成的矩形内部才会有整数坐标
		if (abs(X1 - X2) >= 2 && abs(Y1 - Y2) >= 2) {
			
			int x_max, x_min;
			int y_max, y_min;
			
			//判断横纵坐标的较大值与较小值
		/*	if (X1 > X2) {
				x_max = X1;
				x_min = X2;
			}
			else {
				x_max = X2;
				x_min = X1;
			}
			if (Y1 > Y2) {
				y_max = Y1;
				y_min = Y2;
			}
			else {
				y_max = Y2;
				y_min = Y1;
			}*/
			//进一步思考，矩形的副对角线 右上角的坐标不管x还是y都比左下的大
			//可以简化一下
			if (X1 > X2) {
				x_max = X1;
				x_min = X2;
				y_max = Y1;
				y_min = Y2;
			}
			else
			{
				x_max = X2;
				x_min = X1;
				y_max = Y2;
				y_min = Y1;
			}

			printf("input judge-coordinate\n");
			for (i = 0; i < N; i++) {
				
				int x, y;
				scanf("%d %d", &x, &y);
				if ((x < x_max && x > x_min) && (y > y_min&& y < y_max))
					count++;
			}
			printf("%d", count);
		}
		else
			printf("0\n");
	}
	else
		printf("0\n");

	return 0;
}
