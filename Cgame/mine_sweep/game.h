//扫雷游戏实现分三步
//1 初始化
//2 布置雷
//3 扫雷
//注意：
//1）首先要清楚，扫雷棋盘上的元素：1）提示信息 2）雷   而我们在打印棋盘时不能将雷的位置打印出来。
//所以，我么们就需要两个棋盘分别存贮这两种信息
//2）扫雷时我们要给玩家在被点开处一个周围雷数的提示（0~8）。这个提示基于四周雷的个数，所以要对四周的坐标做出判断。
//因此就出现了一个问题：在棋盘边角的元素如何判断？直接判断可能会造成溢出，所以我们给棋盘增加2行2列
//3）字符和整型的转化问题
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>

#define ROW 4
#define COL 4
#define ROWS ROW+2
#define COLS COL+2

#define INIT_MINE '0'//这样后面的提示函数会比较好写
#define INIT_SHOW '*'
#define MARK '#'//标记地雷

#define MINENUM 15 //生成雷的个数

void InitBoard(char board[ROWS][COLS], int row, int col,char set);//初始化棋盘
void DisplayBoard(char board[ROWS][COLS], int row,int col);//展示棋盘
void SetMine(char board[ROWS][COLS], int row, int col);//布雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//开始扫雷
char HintMine(char board[ROWS][COLS], int x, int y);//生成提示
int Stretch(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);//展开坐标周围
void FailBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//失败棋盘
