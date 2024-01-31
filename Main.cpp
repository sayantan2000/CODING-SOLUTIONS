
#ifndef __IOSTREAM_H
#define __IOSTREAM_H
#include <iostream>
#endif
#include "LinkedList.h"

int main()
{
    LinkedList *m_list = new LinkedList(12);
    for (size_t i = 0; i < 5; i++)
    {
        m_list->Add(m_list->head, i * 100 + 1);
    }
    m_list->Delete(m_list->head, 101);
    m_list->ViewList(m_list->head);
    delete m_list;

    return 0;
}
