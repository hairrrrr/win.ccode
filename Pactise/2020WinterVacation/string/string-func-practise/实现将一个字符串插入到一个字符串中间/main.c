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

	//char* cat[200]; //������ʱ�����ĵ�ַ�Ǽ��䲻��ȫ�ģ�������������

	strncpy(cat, dest, breakpoint);

	cat[breakpoint] = '\0';
	//����һ��������� src ���뵽 dest β��
	//����� breakpoint ��С����Ϊ strlen(dest) ���ַ��ǲ�����ϵ�

	strcat(cat, src);

	strcat(cat, dest + breakpoint);

	//strcpy(dest, cat);//����ܻ�������������������

	return cat;
}