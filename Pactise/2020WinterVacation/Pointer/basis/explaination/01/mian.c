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

	printf("%d\n", ((int)(&arr + 1) - (int)(&arr)));//��ָ��ת��Ϊint������ַ������

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
	// �������κ�����ָ��Ϊ NULL
	int* p = NULL;
	struct S* s = NULL;
	void(*f)(int, double) = NULL;

	// ��������ָ��ĺ����ÿ�ָ��ָʾ����
	char* ptr = malloc(10);
	if (ptr == NULL) printf("Out of memory");
	free(ptr);
}

int main(void) {

	int arr[1000] = { 0 };
	int N = 0;
	int i = 0;

	printf("����������Ĵ�С\n");
	scanf("%d", &N);

	printf("������%d����\n", N);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	return 0;
}

#include<stdlib.h>

int main(void) {

	int i = 0;
	int N = 0;
	int* arr;

    printf("����������Ĵ�С\n");
	scanf("%d", &N);

	arr = (int*)malloc(sizeof(int) * N);

	printf("������%d����\n", N);
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

	printf("������%d00M�ڴ�", i);

	return 0;

}

#include<stdio.h>

int main() {

	int* p;

	p = (int*)malloc(100 * 1024);
	
	p++;	//�ı��� p ���׵�ַ;

	free(p);//free û�еõ� mallocʱ �����p���׵�ַ���������
	return 0;
}

#include<stdio.h>

int main() {

	int* p;

	p = (int*)malloc(100 * 1024);
	
	p++;

	free(p);
	p++;//free �ͷź� p ��Ϊ��Ұָ�룬�������

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