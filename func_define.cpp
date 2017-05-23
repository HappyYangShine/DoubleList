/*************************************************************************
    > File Name: func_define.cpp
    > Author: zhangyangyang
    > Mail: zhangyyhi@163.com 
    > Created Time: 2017年05月23日 星期二 10时10分33秒
 ************************************************************************/

#include <iostream>
#include "head.h"

using namespace std;


Node *CreateDoubleList(int an_array, int element_nums)
{

}


Node *InsertNode(Node *head, int value)
{
    Node *new_node = new Node;
    new_node->value = value;
    new_node->next = NULL;
    new_node->pre = NULL;
    if (NULL == head)
    {
        head = new_node;
        return head;
    }
    Node *temp = head;
    head = new_node;
    head->next = temp;
    temp->pre = head;

    return head;
}


Node *DeleteNode(Node *head, int value)
{
    Node dummy;
    dummy.next = head;
    head = &dummy;
    while (head->next != NULL)
    {
        if (head->next->value != value)
        {
            head = head->next;
        }
        else
        {
            Node *temp = head->next;
            if (NULL == head->next->next)
            {
                head->next = NULL;
            }
            else
            {
                head->next->next->pre = head;
                head->next = head->next->next;
            }
            delete temp;
        }
    }
    if (NULL == dummy.next)
    {
        return NULL;
    }
    else
    {
        (dummy.next)->pre = NULL;
        return dummy.next;
    }
}


// 双链表有序插入
Node *InsertSortNode(Node *head, int value)
{
    Node dummy;
    dummy.next = head;
    head = &dummy;
    // 找到插入点，在head之后插入
    while (head->next != NULL && head->next->value < value)
    {
        head = head->next;
    }
    Node *new_node = new Node;
    new_node->value = value;
    new_node->next = head->next;
    new_node->pre = head;
    head->next = new_node;
    // 判断新插入点是否是最后一个节点
    if (new_node->next != NULL)
    {
        new_node->next->pre = new_node;
    }
    // 处理头结点的pre
    (dummy.next)->pre = NULL;

    return dummy.next;
}
