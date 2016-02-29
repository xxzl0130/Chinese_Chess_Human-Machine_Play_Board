#ifndef __SLAVE_DEF_H__
#define __SLAVE_DEF_H__

#include "CommonDef.h"

// 缓冲区最大大小(1KB)
#define MAX_BUF_SIZE (1 * 1024)

// LED针脚
#define ledPin 13

// 开始/求和按键 int.0 上拉
#define StartKey	2
// 结束/认输按键 int.1 上拉
#define EndKey		3
// 左按键 上拉
#define LeftKey		4
// 右按键 上拉
#define RightKey	5

// 棋盘行引脚起始口
#define RowStart	22
// 棋盘行数
#define RowCnt		10
// 棋盘列引脚起始口
#define ColStart	32
// 棋盘行列数
#define ColCnt		40

#ifdef DEBUG
// 测试使用的串口
#define comSer Serial
#else
// 最终使用的串口
#define comSer Serial1
#endif // DEBUG

enum GameState
{
	Play = 0,
	Draw,
	Resign,
	Win,
	Lose
};

#endif // __SLAVE_DEF_H__