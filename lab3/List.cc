
#include "List.h"

List::List()
    : head{nullptr}, tail{nullptr}
{

}

void List::insert(int value)
{

    if (is_empty())
    {
        //Skapar en ny node och initierar istället för att kalla på en konstruktor
        head = new Node{value, nullptr};
        tail = head;
        return;
    }
}

bool List::is_empty() const
{
    return head == nullptr;

}

int List::size() const
{
    return 0;
}
