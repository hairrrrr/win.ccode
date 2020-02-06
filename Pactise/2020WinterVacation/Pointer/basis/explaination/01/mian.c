#include<stdio.h>

int main() {
	
	int a, b, c;
	int* p = &b;

	a = 1;
	b = 2;
	c = 3;

	printf("%d\n", p[0]);
	printf("%p\n%p\n%p\n", &a, &b, &c);

	return 0;
}

int main() {

	int arr[3] = { 1, 2, 3 };
	int* const q = arr;
	


	printf("arr      =   %p\n", arr);
	printf("&arr     =   %p\n", &arr);
	
	printf("arr + 1  =   %p\n", arr + 1);
	printf("&arr + 1 =   %p\n", &arr + 1);

	printf("%d\n", ((int)(&arr + 1) - (int)(&arr)));//将指针转变为int，看地址相差多少

	printf("q        =   %p\n", q);
	printf("&q       =   %p\n", &q);

	printf("&q + 1   =   %p\n", &q + 1);
	

int* p = arr;
printf("&p = %p\n", &p);

printf("&arr[0] = %p\n", &arr[0]);

arr = 00D5FE10
& arr = 00D5FE10
arr + 1 = 00D5FE14
& arr + 1 = 00D5FE1C
12
q = 00D5FE10
& q = 00D5FE04
& q + 100D5FE08

int main() {

	char arr[10] = { ' 1', '2', '3', '4', '5', '6', '7', '8', '9', '10',};
	char* a = &arr[1];

	printf("a     = %p\n", a);
	printf("a + 1 = %p\n", a + 1);
	printf("a - 1 = %p\n", a - 1);

	printf("\na     = %p\n", &a);
	printf("a + 1 = %p\n", &a + 1);
	printf("a - 1 = %p\n", &a - 1);

}

int main() {

	char arr1[10] = { ' 1', '2', '3', '4', '5', '6', '7', '8', '9', '10', };
	int  arr2[5] = { 1, 2, 3, 4, 5 };

	char* ch1 = &arr1[4];
	char* ch2 = &arr1;
	int* i1 = &arr2[4];
	int i2 = &arr2;

	//printf("ch1 - ch2 = %d\n", ch1 - ch2);
	//printf("ch2 - ch1 = %d\n", ch2 - ch1);
	//printf("\ni1 - i2 = %d\n", i1 - i2);
	//printf("i2 - i1 = %d\n", i2 - i1);

	printf("%d", *i2);
	
}

#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	// 能设置任何类型指针为 NULL
	int* p = NULL;
	struct S* s = NULL;
	void(*f)(int, double) = NULL;

	// 多数返回指针的函数用空指针指示错误
	char* ptr = malloc(10);
	if (ptr == NULL) printf("Out of memory");
	free(ptr);
}

int main(void) {

	int arr[1000] = { 0 };
	int N = 0;
	int i = 0;

	printf("请输入数组的大小\n");
	scanf("%d", &N);

	printf("请输入%d个数\n", N);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	return 0;
}

#include<stdlib.h>

int main(void) {

	int i = 0;
	int N = 0;
	int* arr;

    printf("请输入数组的大小\n");
	scanf("%d", &N);

	arr = (int*)malloc(sizeof(int) * N);

	printf("请输入%d个数\n", N);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	free(arr);
	return 0;
}

#include<stdlib.h>

int main(void) {
	
	void* p;
	int i = 0;

	while ((p = malloc(1024 * 1024 * 100)))
		i++;

	printf("最多分配%d00M内存", i);

	return 0;

}

#include<stdio.h>

int main() {

	int* p;

	p = (int*)malloc(100 * 1024);
	
	p++;	//改变了 p 的首地址;

	free(p);//free 没有得到 malloc时 分配给p的首地址，程序崩溃
	return 0;
}

#include<stdio.h>

int main() {

	int* p;

	p = (int*)malloc(100 * 1024);
	
	p++;

	free(p);
	p++;//free 释放后 p 成为了野指针，程序崩溃

	return 0;
}

#include<stdio.h>

int main() {

	int* p;

	p = (int*)malloc(100 * 1024);

	p++;

	free(p);
	free(p);

	return 0;
}

int main() {

	printf("Hello, \  
World");
		return 0;
}