#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int d1, d2, total;
<<<<<<< HEAD
    char name[20], result[4];

    printf("What is your name?\m");
    scanf("%s[]", name);
    printf("Hello,%s!\n",name);
	//greetingsadded
=======
	
>>>>>>> parent of 61fa46a (Update 2d6.c)
	d1=rand()%6+1;
    d2=rand()%6+1;
    total=d1+d2;

    printf("Die 1:%d\nDie 2:%d\nTotal%d\n",d1, d2, total);

    if(total>=7){
        printf("%s won!",name);
    }
    else {
        printf("%s lost",name);
    }

	return 0;
}