#include "apilib.h"

void HariMain(void)
{
	int i;
	char s[30];
	api_cmdline(s, 30);
	for (i = 5; s[i] != 0; i++) {
		api_putchar(s[i]);
	}
	api_end();
}