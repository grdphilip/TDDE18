
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
    else
    {
        tail->next = tmp;
        tail = tail->next;
    }
    return;
}

void List::remove()
{
    Node *tmp = new Node{};
    tmp = head;
    head = head->next;
    delete tmp;
}

void List::get_index_at(int index)
{
    Node *tmp = new Node{};
    tmp = head;

    for (int i = 0; i <= index-1; i++) 
    {  
        tmp = tmp->next;
    }
    cout << tmp->value;
}

void List::print(Node* head) {
    cout << head->value;
}

bool List::is_empty() const
{
    return head == nullptr;
}

int List::size() const
{
    return 0;
}


