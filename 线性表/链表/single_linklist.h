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
// 5.单链表任意位置删除
int Slist_Delete(LinkList head, int index);
// 6.单链表的删除释放
int Slist_Free(LinkList head);
// 7.单链表的反转
int Slist_Converse(LinkList head);
// 8.求单链表相邻两结点之和最大的第一个结点的指针
LinkList Slist_Two_Sum_Max(LinkList head);
// 9.合并两个有序的单链表1
int Slist_Merge1(LinkList head1,LinkList head2);
// 10.合并两个有序的单链表2
int Slist_Merge2(LinkList head1,LinkList head2);
// 单链表遍历
int Slist_Show(LinkList head);
#endif