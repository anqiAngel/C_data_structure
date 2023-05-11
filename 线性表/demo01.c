#include <stdio.h>
#include "sqlist.h"

int main()
{
    /* code */
    sqlink list = list_create();
    int a = list_insert(list, 10, 0);
    printf("%d\n", list_empty(list));
    list_show(list);
    free(list);
    list = NULL;
    return 0;
}
