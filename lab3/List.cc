
#include "List.h"

using namespace std;

List::List()
    : head{nullptr}, tail{nullptr}
{
}

void List::insert(int value)
{

    Node *tmp = new Node{value, nullptr};

    if (is_empty())
    {
        // Skapar en ny node och initierar istället för att kalla på en konstruktor
        head = tmp;
        tail = head;
        return;
    }
    else if (head->value > tmp->value)
    {
        tmp->next = head;
        tail = head;
        head = tmp;
    }
    else
        sorted_insert(tmp);
    return;
}

void List::sorted_insert(Node *tmp_sort)
{
    Node *iterator;
    iterator = head;
    Node *dummy;
    while (iterator->next != nullptr)
    {
        if (tmp_sort->value > iterator->value)
        {
            if (tmp_sort->value < iterator->next->value)
            {
                dummy->next = iterator->next;
                iterator->next = tmp_sort;
                tmp_sort->next = dummy->next;
                return;
            }
            iterator = iterator->next;
        }
    }
    tail->next = tmp_sort;
    tail = tmp_sort;
    return;
}

void List::remove()
{
    Node *tmp;
    tmp = head;
    head = head->next;
}

void List::get_index_at(int index)
{
    Node *tmp;
    tmp = head;

    for (int i = 0; i <= index - 1; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->value;
}

void List::print()
{
    Node *tmp;
    tmp = head;

    while (tmp)
    {
        cout << "--> " << tmp->value;
        tmp = tmp->next;
    }
}

bool List::is_empty() const
{
    return head == nullptr;
}

int List::size() const
{
    int length = 0;
    Node *tmp;
    tmp = head;

    while (tmp)
    {
        tmp = tmp->next;
        length++;
    }

    return length;
}
