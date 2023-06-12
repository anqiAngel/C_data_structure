#include "single_linklist.h"

// �����������ʼ������
LinkList Single_Linklist_Create(void)
{
    LinkList single_linklist = (LinkList)malloc(sizeof(ListNode));
    if (single_linklist == NULL)
    {
        /* code */
        printf("malloc failure\n");
        return NULL;
    }
    single_linklist->data = 0;
    single_linklist->next = NULL;
    return single_linklist;
}

// �������β��
int Slist_Tail_Insert(LinkList head, data_type value)
{
    if (head == NULL)
    {
        /* code */
        printf("error!!!\n");
        return -1;
    }
    LinkList p = head;
    while (p->next != NULL)
    {
        /* code */
        p = p->next;
    }
    p->next = (LinkList)malloc(sizeof(ListNode));
    if (p->next == NULL)
    {
        /* code */
        printf("malloc failure\n");
        return -1;
    }
    p->next->data = value;
    p->next->next = NULL;
    printf("%d����ɹ�!!!\n", value);
    return 0;
}

// ����������
int Slist_Show(LinkList head)
{
    if (!head || !head->next)
    {
        /* code */
        return -1;
    }
    LinkList p = head;
    while (p->next != NULL)
    {
        /* code */
        p = p->next;
        printf("%d ", p->data);
    }
    printf("\n");
    return 0;
}

// �������ȡָ�����ָ��
LinkList Slist_Get(LinkList head, int index)
{
    if (!head)
    {
        /* code */
        return NULL;
    }
    if (index < -1)
    {
        /* code */
        return NULL;
    }
    if (index == -1)
    {
        /* code */
        return head;
    }
    else
    {
        /* code */
        LinkList p = head;
        for (int i = 0; i < index + 1; i++)
        {
            /* code */
            // index���Ϸ���������
            p = p->next;
        }
        return p;
    }
}

// ����������λ�ò���
int Slist_Insert(LinkList head, data_type value, int index)
{
    if (!head)
    {
        /* code */
        return -1;
    }
    else
    {
        /* code */
        LinkList p = Slist_Get(head, index - 1);
        // ǰһ�����
        if (p == NULL)
        {
            /* code */
            return -1;
        }
        LinkList s = (LinkList)malloc(sizeof(ListNode));
        s->data = value;
        s->next = NULL;
        // û����ɹ�����
        if (s == NULL)
        {
            /* code */
            return -1;
        }
        else
        {
            /* code */
            s->next = p->next;
            p->next = s;
            printf("%d����ɹ�\n", value);
            return 0;
        }
    }
}

// 5.����������λ��ɾ��
int Slist_Delete(LinkList head, int index)
{
    if (!head)
    {
        /* code */
        return -1;
    }
    if (index < -1)
    {
        /* code */
        return -1;
    }
    else
    {
        /* code */
        LinkList p = Slist_Get(head, index - 1);
        if (p == NULL)
        {
            /* code */
            return -1;
        }
        // ���һ����� ����û�н��
        if (p->next == NULL)
        {
            /* code */
            return -1;
        }
        LinkList s = p->next;
        p->next = s->next;
        printf("ɾ������%d\n", s->data);
        free(s);
        s = NULL;
    }
}

// 6.�������ɾ���ͷ�
int Slist_Free(LinkList head)
{
    if (!head)
    {
        /* code */
        return 0;
    }
    LinkList p = head;
    while (p != NULL)
    {
        /* code */
        head = p->next;
        free(p);
        p = head;
    }
    return 0;
}

// 7.������ķ�ת ͷ�巨
int Slist_Converse(LinkList head)
{
    if (!head)
    {
        /* code */
        return -1;
    }
    if (head->next == NULL || head->next->next == NULL)
    {
        /* code */
        return 0;
    }
    else
    {
        /* code */
        LinkList p = head->next;
        LinkList s = p->next;
        while (s != NULL)
        {
            /* code */
            p->next = s->next;
            s->next = head->next;
            head->next = s;
            s = p->next;
        }
        p->next = NULL;
        return 0;
    }
}