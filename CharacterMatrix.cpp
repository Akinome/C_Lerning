/*
 * @funticon     : 
 * @Description  : 
 * @Author       : 赵城
 * @Date         : 2023-01-19 09:30:28
 * @LastEditors  : 赵城
 * @LastEditTime : 2023-01-19 09:34:31
 * @FilePath     : \C_Lerning\CharacterMatrix.cpp
 * 自保其者，未能独善其身。
 * Copyright (c) 2023 by fufu大米保管人, All Rights Reserved. 
 */
// 编译环境：Visual C++ 6.0~2019，EasyX_20210730
// https://easyx.cn
//
#include <graphics.h>
#include <time.h>
#include <conio.h>

int main()
{
	// 设置随机种子
	srand((unsigned) time(NULL));

	// 初始化图形模式
	initgraph(640, 480);

	int  x, y;
	char c;

	settextstyle(16, 8, _T("Courier"));	// 设置字体

	// 设置颜色
	settextcolor(GREEN);
	setlinecolor(BLACK);

	for (int i = 0; i <= 479; i++)
	{
		// 在随机位置显示三个随机字母
		for (int j = 0; j < 3; j++)
		{
			x = (rand() % 80) * 8;
			y = (rand() % 20) * 24;
			c = (rand() % 26) + 65;
			outtextxy(x, y, c);
		}

		// 画线擦掉一个像素行
		line(0, i, 639, i);

		Sleep(10);					// 延时
		if (i >= 479)	i = -1;
		if (_kbhit())	break;		// 按任意键退出
	}

	// 关闭图形模式
	closegraph();
	return 0;
}