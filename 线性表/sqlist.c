#include "sqlist.h"
// 大型工程会制作成库XX.so
// 运算的具体实现

// 顺序表创建
sqlink list_create(void)
{
    // 申请内存
    sqlink L = (sqlink)malloc(sizeof(sqlist));
    if (L == NULL)
    {
        /* code */
        printf("sqlist alloc failed\n");
        return L;
    }
    // 初始化
    // 把一段空间设置为一个值
    memset(L, 0, sizeof(sqlist));
    L->last = -1;
    return L;
}
// 顺序表清空
int list_clear(sqlink L)
{
    if (L == NULL)
    {
        /* code */
        return -1;
    }
    memset(L, 0, sizeof(sqlist));
    L->last = -1;
    return 0;
}
// 顺序表判空
// 1空
// 0非
int list_empty(sqlink L)
{
    if (L->last == -1)
    {
        /* code */
        return 1;
    }
    else
    {
        /* code */
        return 0;
    }
}

// 顺序表长度
int list_length(sqlink L)
{
    if (L == NULL)
    {
        /* code */
        return -1;
    }
    return L->last + 1;
}

// 顺序表定位
int list_locate(sqlink L, data_type value)
{
    int i = 0;
    while (i <= L->last)
    {
        /* code */
        if (L->data[i] == value)
        {
            /* code */
            return i;
        }
        i++;
    }
    return -1;
}

// 顺序表插入
int list_insert(sqlink L, data_type value, int index)
{
    if (L->last == N - 1 || index < 0 || index > L->last + 1)
    {
        /* code */
        printf("index out of range\n");
        return -1;
    }
    for (int i = L->last; i >= index; i--)
    {
        /* code */
        L->data[i + 1] = L->data[i];
    }
    L->data[index] = value;
    L->last++;
    return 0;
}

// 数据打印
int list_show(sqlink L)
{
    if (L == NULL)
    {
        /* code */
        return -1;   
    }
    for (int i = 0; i <= L->last; i++)
    {
        /* code */
        printf("%d ",L->data[i]);
    }
    return 0;
}
