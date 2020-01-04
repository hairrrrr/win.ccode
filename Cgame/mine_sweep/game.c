#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int row, int col,char set) {
	int i = 0;
	int j = 0;
	//�����ʼ��һ��Ҫȫ����ʼ������������жϡ�
	for (i = 0; i <row; i++) {
		for (j = 0; j <col; j++) {
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col){
	int i = 0;
	int j = 0;
	int choose = 0;
	printf("���ֵ�������%d\n",MINENUM);
	printf("   ");
	for (i = 1; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n-------------------------------------\n");
	for (i = 1; i <= row; i++) {
		printf("%d |", i);
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------------\n");
}
void SetMine(char board[ROWS][COLS], int row, int col){
	int x = 0;
	int y = 0;
	int count = MINENUM;
	while (count) {
		x = rand() % row + 1;//����row��9 һ�������ģ9Ϊ0~8
		y = rand() % col + 1;
		if (board[x][y] == '0') {//�ַ�������Ҫ����,ֻ��λ������0�Ž��и�ֵ����ֹ�ظ�
			board[x][y] = '1';
			count--;
		}
	}
}
//�ļ��ڲ����õĺ������Լ���static
 static int Stretch(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y) {
	int count = 0;//��¼��Χû���׵ĵ�ĸ���
	if (HintMine(mine, x, y) == '0')
		count++;
	if (HintMine(mine, x - 1, y) == '0')	
		count++;
	if (HintMine(mine, x - 1, y-1) == '0')
		count++;
	if (HintMine(mine, x - 1, y+1) == '0')
		count++;
	if (HintMine(mine, x + 1, y) == '0')
		count++;
	if (HintMine(mine, x + 1, y-1) == '0')
		count++;
	if (HintMine(mine, x + 1, y+1) == '0')
		count++;
	if (HintMine(mine, x , y+1) == '0')
		count++;
	if (HintMine(mine, x , y-1) == '0')
		count++;
	if (count == 9) {
		show[x][y] = ' ';
		show[x-1][y] = ' ';
		show[x-1][y-1] = ' ';
		show[x-1][y+1] = ' ';
		show[x+1][y] = ' ';
		show[x+1][y-1] = ' ';
		show[x+1][y+1] = ' ';
		show[x][y-1] = ' ';
		show[x][y+1] = ' ';
		return 0;
	}
	else
		return 1;
	//�����count = 9˵�������������Χ�ĵ����Χ��û���ף����������ȫ������
	//���򣬷���1ִ�в���
}
 static char HintMine(char board[ROWS][COLS], int x, int y) {
	return (board[x - 1][y] + board[x - 1][y - 1] + board[x - 1][y + 1]
		  + board[x + 1][y] + board[x + 1][y - 1] + board[x + 1][y + 1]  
		  + board[x][y - 1] + board[x][y + 1] - 7 * '0');
	//��Ϊ������û���׾��ǡ�0�������׾��ǡ�1�����������ǵ�ASCIIֵ��������ȥ8����0����ASCIIֵ������Χ��������
	//�����ڼ���һ����0����ACSIIֵ����֮������Ӧ��ASCIIֵ
}
 void FailBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	 int i = 0;
	 int j = 0;
	 for (i = 1; i <=row; i++) {
		 for (j = 1; j <= col; j++) {
			 if (mine[i][j] == '1')
				 show[i][j] = '!';
		 }
	 }
 }
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int count = row*col;
	double begin = 0;//��ʼʱ��
	double end = 0;//����ʱ��
	int choose = 0;//ѡ��
	int mark = 0;//ѡ��
	int score = 0;//�Ʒ�
	begin = (double)clock();
	while (count-MINENUM) {
		printf("�Ƿ�ִ�в�����1.�� 0.�� ->");
		scanf("%d", &choose);
		while (choose) {
			printf("1.��ǵ��� 2.ȡ����� 0.�˳� -> ");
			scanf("%d", &mark);
			switch (mark) {
				case 1:
					printf("���������꣺->");
					scanf("%d %d", &x, &y);
					if (show[x][y] == '*')
						show[x][y] = '#';
					else
						printf("�Ƿ�������\n");
					DisplayBoard(show, ROW, COL);
					break;
				case 2:
					printf("���������꣺->");
					scanf("%d %d", &x, &y);
					if (show[x][y] == '#')
						show[x][y] = '*';
					else
						printf("�Ƿ�������\n");
					DisplayBoard(show, ROW, COL);
					break;
				case 0:
					choose = 0;
					break;
				default:
					printf("ѡ�����������ѡ��\n");
			}

		}
		rechoose:
		printf("��������������:->");
		scanf("%d %d", &x, &y);
		 if (show[x][y] == '#') {
			printf("��������ǵĵ��ף�ȷ��Ҫ����->1.�� 0.��");
			scanf("%d", &choose);
			if (choose == 0)
				goto rechoose;
		 }
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				end = (double)clock();
				printf("��ϧ���㱻ը���ˣ�	��ʱ%.1f��	 �÷֣�%d��\n", (end - begin) / CLOCKS_PER_SEC,score);//ʹ��clock()��ʱ��Ҫһ�������CLOCKS_PER_SECת����λΪ��
				FailBoard(mine,show, ROW, COL);
				DisplayBoard(show, ROW, COL);
				break;
			}
			else {
				if (show[x][y] == '*') {
					if (Stretch(mine, show, x, y)) {
						if (HintMine(mine, x, y) == '0') {
							show[x][y] = ' ';
						}
						else
							show[x][y] = HintMine(mine, x, y);
						DisplayBoard(show, ROW, COL);
						count--;
						score++;
					}
					else {
						count -= 9;//x��y��Χ���������������ϼ�����9����
						score += 9;
						DisplayBoard(show, ROW, COL);
					}
				}
			
				else
					printf("����������Ѿ������ˣ�����������\n");
			}
		}
		else
			printf("��������Ƿ�������������\n");
	}
	if (!(count - MINENUM)) {
		end = (double)clock();
		printf("��ϲ�㣡���ʤ����	��ʱ%.1f��\n	�÷֣�%d��", (end - begin) / CLOCKS_PER_SEC,score);
	}
	
}
