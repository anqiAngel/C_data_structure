#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 头文件放一些声明
// 数据结构的定义 结构体、操作声明
typedef int data_type;
#define N 128

typedef struct
{
    /* data */
    // 存储数据
    data_type data[N];
    // 最后一个元素下标
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
// 顺序表元素打印
int list_show(sqlink L);
// 删除指定位置的元素
int list_delete(sqlink L, int index);
// 求顺序表并集
int list_merge(sqlink L1, sqlink L2);
// 顺序表去重
int list_purge(sqlink L);
// 顺序表销毁
int list_free(sqlink L);