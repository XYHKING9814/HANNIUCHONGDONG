#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
#include <stdlib.h>
#include <time.h>
#define MAX_ROW 3
#define MAX_COL 3
int menu() {
	printf("************************\n");
	printf(" 1. 开始游戏\n");
	printf(" 0. 结束游戏\n");
	printf("*************************\n");
	printf(" 请输入您的选择: ");
	//这是我们对一个初始界面的初始化，就如同登录游戏的界面。
	int choice = 0;//设置一个变量choice用来接收下棋者的意愿。
	scanf("%d", &choice);
	return choice;
}
void init(char chessBoard[MAX_ROW][MAX_COL]) //这里我们定义一个三行三列的字符数组，并把它初始化为‘ ’，为了便于后期修改棋盘的规模，这里我们采用宏定义来实现三行三列。
{
	// 把数组中的每个元素都设为 空格
	for (int row = 0; row < MAX_ROW; row++) 
	{
		for (int col = 0; col < MAX_COL; col++) 
		{
			chessBoard[row][col] = ' ';
		}
	}
}
//这样打出来的棋盘,是不够的，因为空格本身就是黑屏，所以说，你是什么也看不见的，所以我们我们必须在空格的周围加上边界线。
void printChessBoard(char chessBoard[MAX_ROW][MAX_COL])
{ 
	for (int row = 0; row < MAX_ROW; row++) 
	{
		for (int col = 0; col < MAX_COL; col++) 
		{
			printf("%c ", chessBoard[row][col]);
		}
		printf("\n");
	}//这就是简单的把我们的空格棋盘打出来了，这个时候你是什么也看不见的，于是我们对空格棋盘进行优化。
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++) 
	{
		printf("| %c | %c | %c |\n", chessBoard[row][0],
			chessBoard[row][1], chessBoard[row][2]);
		printf("+---+---+---+\n");
	}
}//将棋盘的边界打印出来
void playerMove(char chessBoard[MAX_ROW][MAX_COL]) 
{
	while (1)
	{
		int row = 0;
		int col = 0;
		printf(" 请玩家输入坐标(row col): ");
		
		scanf("%d %d", &row, &col);
	
		if (row < 0 || row >= MAX_ROW
			|| col < 0 || col >= MAX_COL) 
		{
			//在真正的落子之前，要对玩家输入的值进行判断，即判断输入值是否合法，应该是横纵左坐标都在一个范围内。
			printf("您的坐标不在合法范围内 [0, 2]\n");
			continue;
		}
		// 同时还要检验玩家下的地方是否已经有子，这个子可以是玩家下的，也可能是电脑下的。 
		if (chessBoard[row][col] != ' ') 
		{
			printf("您的坐标位置已经有子了!\n");
			continue;
		}
		chessBoard[row][col] = 'x';
		break;
	}
}
void computerMove(char chessBoard[MAX_ROW][MAX_COL]) 
{
	while (1) 
	{
		int row = rand() % MAX_ROW;//产生一个随机数，并且与三取余数，作为行坐标，列坐标也同理
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') 
		{
			// 需要保证随机数不能是已经有子的位置. 
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}
}
int IsFull(char chessBoard[MAX_ROW][MAX_COL]) 
{
	//这个函数是为了判别九个格子是不是都放满了，或者说判断游戏结束的一种方法。
	for (int row = 0; row < MAX_ROW; row++) 
	{
		for (int col = 0; col < MAX_COL; col++) 
		{
			if (chessBoard[row][col] == ' ')
			{
				// 如果找到 空格 说明没满
				return 0;
			}
		}
	}
	return 1;
}
char IsVictory(char chessBoard[MAX_ROW][MAX_COL]) 
{
	// 判定所有的行
	for (int row = 0; row < MAX_ROW; row++)
	{
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) 
		{
			return chessBoard[row][0];
		}
	}
	// 判定所有的列
	for (int col = 0; col < MAX_COL; col++)
	{
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) 
		{
			return chessBoard[0][col];
		}
	}
	// 判定两个对角线
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) 
	{
		return chessBoard[0][0];
	}
	if (chessBoard[2][0] != ' '
		&& chessBoard[2][0] == chessBoard[1][1]
		&& chessBoard[2][0] == chessBoard[0][2]) 
	{
		return chessBoard[2][0];
	}
	// 判定是否和棋
	// 看棋盘中是否有剩余空间
	if (IsFull(chessBoard)) 
	{
		return 'q';
	}
	return ' ';
}
// 此处约定返回结果的含义: 
// 'x' 表示玩家获胜
// 'o' 表示电脑获胜
// ' ' 表示胜负未分
// 'q' 表示和棋
void game() 
{
	// 1. 创建棋盘并初始化
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	init(chessBoard);
	char winner = ' ';
	while (1) 
	{
		// 2. 打印棋盘
		printChessBoard(chessBoard);
		// 3. 玩家落子(玩家输入行列坐标的方式来落子)
		playerMove(chessBoard);
		// 4. 判定胜负关系
		winner = IsVictory(chessBoard);
		if (winner != ' ') 
		{
			break;
		}
		// 5. 电脑落子(随机位置落子) 
		computerMove(chessBoard);
		// 6. 判定胜负关系
		winner = IsVictory(chessBoard);
		if (winner != ' ') 
		{
			break;
		}
	}
	printChessBoard(chessBoard);
	if (winner == 'x') 
	{
		printf("恭喜您, 您赢了!\n");
	}
	else if (winner == 'o') 
	{
		printf("抱歉，您输了!\n");
	}
	else 
	{
		printf("和棋\n");
	}
}
int main() 
{
	// 此处通过简单的交互菜单和玩家交互进行开始一局游戏
	// 此处使用强制类型转换, 把 time_t 转成 unsigned int
	srand((unsigned int)time(0));//这里是给随机数一个随机种子，否则随机数就是有规律的假随机数，这里我们用时间来实现，需要加上头文件“time.h”
	while (1) 
	{
		int choice = menu();
		if (choice == 1) 
		{
			game();
		}
		else if (choice == 0) 
		{
			printf("goodbye!\n");
			break;
		}
	}
	system("pause");
	return 0;
}