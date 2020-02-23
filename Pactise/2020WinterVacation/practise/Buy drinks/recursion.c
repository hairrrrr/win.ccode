#include<stdio.h>

int bottleNum(int yuan) {

	//输入的钱应该大于 0
	if (yuan > 0) {

		while (yuan != 1) {
			//yuan 是奇数
			if (yuan & 1)
				return yuan - 1 + bottleNum((yuan >> 1) + 1);
			//yuan 是偶数
			else
				return yuan + bottleNum(yuan >> 1);
		}
		//只剩一个空瓶，不能再换饮料，结束
		return 1;
	}
	else
		return 0;

}


int main(void) {

	int yuan = 0;

	printf("Enter the amount of money:￥ ");
	scanf("%d", &yuan);

	printf("You can buy %d bottles of drinks.\n", bottleNum(yuan));

	return 0;
}
