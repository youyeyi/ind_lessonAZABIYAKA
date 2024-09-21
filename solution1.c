#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdlib.h>

int func1()
{
    int number;
    printf("Welcome to New Application! \nEnter your number and you will see it on your screen\n");
    printf("Enter: ");
    scanf_s("%d", &number);
    printf("%d", number);

    return 0;
}