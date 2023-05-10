#include <stdio.h>
#include <stdlib.h>
// 头文件放一些声明
// 数据结构的定义 结构体、操作声明
typedef int data_type;
#define N 128

typedef struct
{
    /* data */
    data_type data[N];
    int last;
} sqlist, *sqlink;

// 顺序表创建
sqlink list_create(void);
// 顺序表清空
int list_clear(sqlink L);
// 顺序表判空
int list_empty(sqlink L);
// 顺序表长度
int list_length(sqlink L);
// 顺序表定位
int list_locate(sqlink L, data_type value);
// 顺序表插入
int list_insert(sqlink L, data_type value, int index);
