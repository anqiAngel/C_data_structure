#include <stdio.h>
#include "sqlist.h"

int main()
{
    /* code */
    sqlink list = list_create();
    int a = list_clear(list);
    printf("%d\n", a);
    return 0;
}
