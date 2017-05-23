/*************************************************************************
    > File Name: main.cpp
    > Author: zhangyangyang
    > Mail: zhangyyhi@163.com 
    > Created Time: 2017年05月21日 星期日 19时36分35秒
 ************************************************************************/

#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    int an_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//    Node *head = CreateList(an_array, sizeof(an_array) / sizeof(an_array[0]));

    Node *head = NULL;
//    head = InsertNode(head, an_array[0]);
    for (int i = 0; i < (int)(sizeof(an_array) / sizeof(an_array[0])); ++i)
    {
        head = InsertNode(head, an_array[i]);
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << "value: " << temp->value << endl;
        temp = temp->next;
    }

//    head = DeleteNode(head, 0);
//    head = DeleteNode(head, 20);
//    head = DeleteNode(head, 5);
//    head = DeleteNode(head, 9);
//
//    cout << endl;
//    temp = head;
//    while (temp != NULL)
//    {
//        cout << "value: " << temp->value << endl;
//        temp = temp->next;
//    }
//

    head = InsertSortNode(head, -5);
    head = InsertSortNode(head, 20);
    head = InsertSortNode(head, 15);
    head = InsertSortNode(head, 18);

    cout << endl;
    temp = head;
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
//
    cout << "tail value: " << tail->value << endl;
//
    cout << endl;
    while (tail != NULL)
    {
        cout << "tail value: " << tail->value << endl;
        tail = tail->pre;
    }

    return 0;

}
