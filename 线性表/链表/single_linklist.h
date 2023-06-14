#ifndef _SINGLE_LINKLIST_H
#define _SINGLE_LINKLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int data_type;
// ��������
typedef struct Node
{
    /* data */
    data_type data;
    struct Node *next;
} ListNode,*LinkList;
// 1.��������
LinkList Single_Linklist_Create(void);
// 2.�������ȡָ�����ָ��
LinkList Slist_Get(LinkList head,int index);
// 3.������β����
int Slist_Tail_Insert(LinkList head, data_type value);
// 4.����������λ�ò���
int Slist_Insert(LinkList head, data_type value,int index);
// 5.����������λ��ɾ��
int Slist_Delete(LinkList head, int index);
// 6.�������ɾ���ͷ�
int Slist_Free(LinkList head);
// 7.������ķ�ת
int Slist_Converse(LinkList head);
// 8.���������������֮�����ĵ�һ������ָ��
LinkList Slist_Two_Sum_Max(LinkList head);
// 9.�ϲ���������ĵ�����
int Slist_Merge(LinkList head,LinkList head2);
// ���������
int Slist_Show(LinkList head);
#endif