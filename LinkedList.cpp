

#include "LinkedList.h"
#ifndef __IOSTREAM_H
#define __IOSTREAM_H
#include <iostream>
#endif

LinkedList::LinkedList(int a_data)
{
    if (head == nullptr)
    {
        head = new Node(a_data);
        head->prev = head;
    }
}

LinkedList::~LinkedList()
{
    std::wcout << "Deleting Head";
    delete head;
}
void LinkedList::Add(Node *a_head, int a_data)
{
    if (a_head != nullptr && a_head->Next == nullptr)
    {
        a_head->Next = new Node(a_data);
        a_head->Next->prev = a_head;
    }
    else
    {
        a_head = a_head->Next;
        Add(a_head, a_data);
    }
}
void LinkedList::ViewList(Node *a_head)
{
    while (a_head != nullptr)
    {
        std::wcout << a_head->GetData() << std::endl;
        // std::wcout << "PrevtData" << a_head->prev->GetData() << std::endl;
        a_head = a_head->Next;
    }
}

void LinkedList::Delete(Node *a_head, int data)
{

    if (a_head->GetData() == data)
    {
        Node *next = a_head->Next;
        a_head->prev->Next = next;
    }
    else
    {
        a_head = a_head->Next;
        Delete(a_head, data);
    }
}
