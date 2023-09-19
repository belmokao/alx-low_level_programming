#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int c;
int x = 0;

srand(time(0));
while (x <= 128)
{
c += x;
x += 1;
}
printf("%d\n", c);
return (0);
}
