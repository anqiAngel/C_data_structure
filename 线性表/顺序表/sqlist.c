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

// 顺序表数据打印
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
        printf("%d ", L->data[i]);
    }
    printf("\n");
    return 0;
}
// 删除指定位置的元素
int list_delete(sqlink L, int index)
{
    if (L->last == -1)
    {
        /* code */
        return -1;
    }
    if (index < 0 || index > L->last)
    {
        /* code */
        printf("index out of range\n");
        return -1;
    }
    for (int i = index; i <= L->last; i++)
    {
        /* code */
        L->data[i] = L->data[i + 1];
    }
    L->last--;
    return 0;
}
// 求顺序表并集
int list_merge(sqlink L1, sqlink L2)
{
    int i = 0;
    int ret = 0;
    while (i <= L2->last)
    {
        /* code */
        if (list_locate(L1, L2->data[i]) == -1)
        {
            /* code */
            if (list_insert(L1, L2->data[i], L1->last + 1) == -1)
            {
                return -1;
            }
        }
        i++;
    }
    return 0;
}
// 留下每一类元素最后出现的
// 顺序表去重
int list_purge(sqlink L)
{
    if (L->last == 0)
    {
        /* code */
        return 0;
    }
    for (int j = 1; j <= L->last; j++)
    {
        /* code */
        for (int i = j - 1; i >= 0; i--)
        {
            /* code */
            if (L->data[i] == L->data[j])
            {
                /* code */
                list_delete(L, i);
            }
        }
    }
    return 0;
}
// 顺序表销毁
int list_free(sqlink L)
{
    if (L == NULL)
    {
        /* code */
        return -1;
    }
    free(L);
    L = NULL;
    return 0;
}
