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
        return 0;
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

// 8.���������������֮�����ĵ�һ������ָ��
LinkList Slist_Two_Sum_Max(LinkList head)
{
    if (!head)
    {
        /* code */
        return NULL;
    }
    if (head->next == NULL)
    {
        /* code */
        return NULL;
    }
    if (head->next->next == NULL)
    {
        /* code */
        return head->next;
    }
    LinkList p = head->next;
    LinkList s = p->next;
    int max = 0;
    int sum = 0;
    LinkList max_ptr = p;
    while (s != NULL)
    {
        /* code */
        sum = p->data + s->data;
        if (sum >= max)
        {
            /* code */
            max = sum;
            max_ptr = p;
        }
        p = s;
        s = p->next;
    }
    return max_ptr;
}

// 9.�ϲ���������ĵ�����1
int Slist_Merge1(LinkList head1, LinkList head2)
{
    if (!head1 || !head2)
    {
        /* code */
        return -1;
    }
    if (head1->next == NULL || head2->next == NULL)
    {
        /* code */
        return -1;
    }
    // 1�еĽ��ָ��
    LinkList p = head1->next;
    // 2��¼ǰһ��Ԫ�ص�ָ��
    LinkList s = head1;
    // 2�еĽ��ָ��
    LinkList q = head2->next;
    // ��¼2�е���һ�����
    LinkList r = q->next;
    while (q != NULL)
    {
        /* code */
        while (p != NULL && p->data <= q->data)
        {
            /* code */
            s = p;
            p = p->next;
        }
        if (p == NULL)
        {
            /* code */
            s->next = q;
            break;
        }
        q->next = p;
        s->next = q;
        p = q;
        q = r;
        if (r == NULL)
        {
            /* code */
            r = r;
        }
        else
        {
            /* code */
            r = r->next;
        }
        printf("����ɹ�!!!\n");
    }
    free(head2);
    p = NULL;
    q = NULL;
    s = NULL;
    r = NULL;
    return 0;
}

// 10.�ϲ���������ĵ�����2
int Slist_Merge2(LinkList head1, LinkList head2)
{
    if (!head1 || !head2)
    {
        /* code */
        return -1;
    }
    if (head1->next == NULL || head2->next == NULL)
    {
        /* code */
        return -1;
    }
    LinkList p = head1->next;
    LinkList q = head2->next;
    head1->next = NULL;
    head2->next = NULL;
    LinkList s = head1;
    while (p != NULL && q != NULL)
    {
        /* code */
        if (p->data <= q->data)
        {
            /* code */
            s->next = p;
            p = p->next;
            s = s->next;
            s->next = NULL;
        }
        else
        {
            /* code */
            s->next = q;
            q = q->next;
            s = s->next;
            s->next = NULL;
        }
    }
    if (p != NULL)
    {
        /* code */
        s->next = p;
    }
    if (q != NULL)
    {
        /* code */
        s->next = q;
    }
    free(head2);
    p = NULL;
    q = NULL;
    s = NULL;
    return 0;
}