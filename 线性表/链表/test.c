#include "single_linklist.h"

int main()
{
    /* code */
    int value;
    LinkList single_linklist = Single_Linklist_Create();
    if (single_linklist == NULL)
        return -1;
    printf("Create Slist1\n");
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
    LinkList single_linklist1 = Single_Linklist_Create();
    if (single_linklist1 == NULL)
        return -1;
    printf("Create Slist2\n");
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
        Slist_Tail_Insert(single_linklist1, value);
    }
    Slist_Show(single_linklist1);
    // Slist_Merge1(single_linklist, single_linklist1);
    Slist_Merge2(single_linklist, single_linklist1);
    single_linklist1 = NULL;
    printf("合并结果:");
    Slist_Show(single_linklist);
    Slist_Insert(single_linklist, 10, 2);
    Slist_Show(single_linklist);
    // Slist_Delete(single_linklist,2);
    // Slist_Delete(single_linklist,0);
    Slist_Delete(single_linklist, -3);
    Slist_Show(single_linklist);
    LinkList p = Slist_Two_Sum_Max(single_linklist);
    if (p != NULL)
    {
        /* code */
        printf("p->data:%d\n", p->data);
    }
    Slist_Converse(single_linklist);
    Slist_Show(single_linklist);
    Slist_Free(single_linklist);
    single_linklist = NULL;
    printf("释放完毕!!!\n");
    Slist_Show(single_linklist);
    return 0;
}
