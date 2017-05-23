/*************************************************************************
    > File Name: head.h
    > Author: zhangyangyang
    > Mail: zhangyyhi@163.com 
    > Created Time: 2017年05月23日 星期二 10时09分59秒
 ************************************************************************/

#include <iostream>

struct Node
{
    int value;
    Node *pre;
    Node *next;
};

Node *CreateDoubleList(int an_array, int element_nums);

Node *InsertNode(Node *head, int value);

Node *DeleteNode(Node *head, int value);

Node *InsertSortNode(Node *head, int value);
