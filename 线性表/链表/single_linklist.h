#ifndef _SINGLE_LINKLIST_H
#define _SINGLE_LINKLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int data_type;
// 单链表结点
typedef struct Node
{
    /* data */
    data_type data;
    struct Node *next;
} ListNode,*LinkList;

// 1.单链表创建
LinkList Single_Linklist_Create(void);
// 2.单链表获取指定结点指针
LinkList Slist_Get(LinkList head,int index);
// 3.单链表尾插入
int Slist_Tail_Insert(LinkList head, data_type value);
// 4.单链表任意位置插入
int Slist_Insert(LinkList head, data_type value,int index);
// 5.单链表遍历
int Slist_Show(LinkList head);
#endif