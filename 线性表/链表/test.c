#include "single_linklist.h"

int main()
{
    /* code */
    int value;
    LinkList single_linklist = Single_Linklist_Create();
    if (single_linklist == NULL)
        return -1;
    while (1)
    {
        /* code */
        printf("input:>");
        scanf("%d", &value);
        if (value == -1)
        {
            /* code */
            break;
        }
        Slist_Tail_Insert(single_linklist, value);
    }
    Slist_Show(single_linklist);
    Slist_Insert(single_linklist, 10, 2);
    Slist_Show(single_linklist);
    // Slist_Delete(single_linklist,2);
    // Slist_Delete(single_linklist,0);
    Slist_Delete(single_linklist,-3);
    Slist_Show(single_linklist);
    Slist_Converse(single_linklist);
    Slist_Show(single_linklist);
    Slist_Free(single_linklist);
    single_linklist = NULL;
    printf(" Õ∑≈ÕÍ±œ!!!\n");
    Slist_Show(single_linklist);
    return 0;
}
