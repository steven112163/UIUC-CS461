#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define COOKIE 0
unsigned int practice(unsigned int cookie)
{
	unsigned int hint1 = 0x1337;
	unsigned int hint2 = 0xbeef;
	hint1 = get_num(cookie);
	hint2 = 0x11345563;
	printf("%x\n",hint1);
	return hint1;
}

int main()
{
#ifdef COOKIE
	unsigned int result = practice(COOKIE);

#else
	printf("something is wrong!");

#endif
	exit(0);
}
