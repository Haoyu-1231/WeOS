#include "apilib.h"

void HariMain(void)
{
	int win;
	char buf[350 * 200];
	win = api_openwin(buf, 350, 200, -1, "系统信息");
	api_putstrwin(win, 20, 38, 0, 12, "RedSoil WeOS");
	api_putstrwin(win, 20, 58, 0, 21, "1.0 Beta 1 (Build 05) [版本 1.0.0.5]");
	api_putstrwin(win, 20, 78, 1, 18, "此版本为测试版本！");
	api_putstrwin(win, 21, 78, 1, 18, "此版本为测试版本！");
	api_putstrwin(win, 20, 128, 0, 36, "版权所有 (C) 2012-2025 RedSoil 公司.");
	for (;;) {
		if (api_getkey(1) == 0x0a) {
			break;
		}
	}
	api_end();
}
