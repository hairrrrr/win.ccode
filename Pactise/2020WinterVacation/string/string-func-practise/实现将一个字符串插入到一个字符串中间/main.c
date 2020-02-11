#include<stdio.h>
#include<string.h>

char* sp_strcat(char* dest, const char* src, char* cat, int breakpoint);

int main(void) {

	char dest[100], src[100], cat[200];
	int breakpoint = 0;

	printf("Input string dest: ");
	gets(dest);
	printf("Input string src: ");
	gets(src);

	printf("insert src into dest, Input a position:  ");
	scanf("%d", &breakpoint);

	sp_strcat(dest, src, cat, breakpoint);

	printf("\nOK,Let's see WTF is this:\n");
	puts(cat);

	return 0;
}

char* sp_strcat(char* dest, const char* src, char* cat, int breakpoint) {

	//char* cat[200]; //返回临时变量的地址是及其不安全的，不建议这样做

	strncpy(cat, dest, breakpoint);

	cat[breakpoint] = '\0';
	//试想一种情况：将 src 插入到 dest 尾，
	//输入的 breakpoint 大小正好为 strlen(dest) 空字符是不会加上的

	strcat(cat, src);

	strcat(cat, dest + breakpoint);

	//strcpy(dest, cat);//这可能会造成溢出，不建议这样

	return cat;
}