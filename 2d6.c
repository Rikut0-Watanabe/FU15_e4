#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int d1, d2, total;
	
	d1=rand()%6+1;
    d2=rand()%6+1;
    total=d1+d2;

    printf("Die 1:%d\nDie 2:%d\nTotal%d\n",d1, d2, total);
	return 0;
}