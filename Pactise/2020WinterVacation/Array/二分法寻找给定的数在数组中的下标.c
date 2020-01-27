#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数。给定一个数组，和一个数，寻找到这个数再数组中所在的位置（下标）。如果找不到，给出提示

#include<stdio.h>

#define N 10 //数组元素个数

int search(int want, int lenth, int* arr) {

	int right = lenth - 1;
	int left = 0;
	int mid = 0;
	int ret = 0;

	while (right >= left) {
		mid = (right + left) / 2;
		if (want > arr[mid])
			left = mid + 1;
		if (want < arr[mid])
			right = mid - 1;
		if (want == arr[mid]) {
			ret = mid;
			break;
		}
		
	}

	if (right < left)
		return -1;
	else
		return ret;
}

int main() {

	int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int lenth = sizeof(arr) / sizeof(arr[0]);//计算数组大小
	int want = 0;
	int index = 0;

	printf("input the number you want to search\n");
	scanf("%d", &want);

	index = search(want, lenth, arr);//切记：数组作为函数参数时，往往必须再用另一个参数来传入数组的大小
	
	if (index == -1)
		printf("Can't find!\n");
	else
		printf("the index of %d: %d\n", want, index);

	return 0;
}



