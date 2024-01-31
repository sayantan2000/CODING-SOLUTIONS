#ifndef __IOSTREAM_H
#define __IOSTREAM_H
#include <iostream>
#endif
class Node
{
private:
    int data;

public:
    Node *Next = nullptr;
    Node *prev = nullptr;
    Node(int a_data)
    {
        this->data = a_data;
    }
    ~Node()
    {
        std::wcout << "Deleting -" << data;
    }
    int GetData()
    {
        return this->data;
    }
};
class LinkedList
{
private:
    /* data */
public:
    Node *head = nullptr;
    LinkedList(int a_data);
    ~LinkedList();
    void Add(Node *a_head, int a_data);
    void ViewList(Node *a_head);
    void Delete(Node *a_head, int index);
};