#include <stdio.h>
#include "sqlist.h"

int main()
{
    /* code */
    sqlink list = list_create();
    list_insert(list, 10, 0);
    list_insert(list, 20, 0);
    list_insert(list, 30, 0);
    printf("%d\n", list_empty(list));
    list_show(list);
    list_delete(list);
    return 0;
}
