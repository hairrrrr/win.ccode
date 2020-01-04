#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int row, int col,char set) {
	int i = 0;
	int j = 0;
	//这里初始化一定要全部初始化，方便后面判断。
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
	printf("本局地雷数：%d\n",MINENUM);
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
		x = rand() % row + 1;//这里row是9 一个随机数模9为0~8
		y = rand() % col + 1;
		if (board[x][y] == '0') {//字符和整型要分清,只有位置上是0才进行赋值，防止重复
			board[x][y] = '1';
			count--;
		}
	}
}
//文件内部调用的函数可以加上static
 static int Stretch(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y) {
	int count = 0;//记录周围没有雷的点的个数
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
	//如果是count = 9说明输入的坐标周围的点的周围都没有雷，则将这个区域全部亮出
	//否则，返回1执行操作
}
 static char HintMine(char board[ROWS][COLS], int x, int y) {
	return (board[x - 1][y] + board[x - 1][y - 1] + board[x - 1][y + 1]
		  + board[x + 1][y] + board[x + 1][y - 1] + board[x + 1][y + 1]  
		  + board[x][y - 1] + board[x][y + 1] - 7 * '0');
	//因为棋盘上没有雷就是‘0’，有雷就是‘1’，所以他们的ASCII值加起来减去8个‘0’的ASCII值就是周围的雷数，
	//雷数在加上一个‘0’的ACSII值就是之个数对应的ASCII值
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
	double begin = 0;//开始时间
	double end = 0;//结束时间
	int choose = 0;//选项
	int mark = 0;//选项
	int score = 0;//计分
	begin = (double)clock();
	while (count-MINENUM) {
		printf("是否执行操作？1.是 0.否 ->");
		scanf("%d", &choose);
		while (choose) {
			printf("1.标记地雷 2.取消标记 0.退出 -> ");
			scanf("%d", &mark);
			switch (mark) {
				case 1:
					printf("请输入坐标：->");
					scanf("%d %d", &x, &y);
					if (show[x][y] == '*')
						show[x][y] = '#';
					else
						printf("非法操作！\n");
					DisplayBoard(show, ROW, COL);
					break;
				case 2:
					printf("请输入坐标：->");
					scanf("%d %d", &x, &y);
					if (show[x][y] == '#')
						show[x][y] = '*';
					else
						printf("非法操作！\n");
					DisplayBoard(show, ROW, COL);
					break;
				case 0:
					choose = 0;
					break;
				default:
					printf("选择错误请重新选择！\n");
			}

		}
		rechoose:
		printf("请亮出输入坐标:->");
		scanf("%d %d", &x, &y);
		 if (show[x][y] == '#') {
			printf("这是您标记的地雷！确定要打开吗？->1.是 0.否");
			scanf("%d", &choose);
			if (choose == 0)
				goto rechoose;
		 }
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				end = (double)clock();
				printf("可惜，你被炸死了！	用时%.1f秒	 得分：%d分\n", (end - begin) / CLOCKS_PER_SEC,score);//使用clock()计时需要一个差，除以CLOCKS_PER_SEC转化单位为秒
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
						count -= 9;//x，y周围都被亮出，棋盘上减少了9个数
						score += 9;
						DisplayBoard(show, ROW, COL);
					}
				}
			
				else
					printf("这个坐标您已经检查过了！请重新输入\n");
			}
		}
		else
			printf("输入坐标非法！请重新输入\n");
	}
	if (!(count - MINENUM)) {
		end = (double)clock();
		printf("恭喜你！获得胜利！	用时%.1f秒\n	得分：%d分", (end - begin) / CLOCKS_PER_SEC,score);
	}
	
}
