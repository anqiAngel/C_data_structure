#include <stdio.h>
#include "sqlist.h"

int main()
{
    /* code */
    sqlink list1 = list_create();
    sqlink list2 = list_create();
    list_insert(list1, 10, 0);
    list_insert(list1, 20, 0);
    list_insert(list1, 30, 0);
    printf("%d\n", list_empty(list1));
    list_show(list1);
    printf("%d\n", list_locate(list1, 10));
    list_delete(list1, 0);
    list_delete(list1, 1);
    list_show(list1);
    list_insert(list2, 10, 0);
    list_insert(list2, 20, 0);
    list_insert(list2, 40, 0);
    list_merge(list1, list2);
    list_show(list1);
    list_show(list2);
    list_insert(list1, 10, 0);
    list_insert(list1, 20, 0);
    list_insert(list1, 30, 0);
    list_show(list1);
    list_purge(list1);
    list_show(list1);
    list_free(list2);
    list_free(list1);
    return 0;
}
