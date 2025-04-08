#include <stdio.h>

int main()
{

    printf("Hola Mundo  ");

    int num, *punt;

    punt = &num;

    printf("%p  ", punt);
    printf("%d  ", *punt);
    printf("%p  ", &num);
    printf("%p  ", &punt);
    printf("%d  ", sizeof(num));

    return 0;
}