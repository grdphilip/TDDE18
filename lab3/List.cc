
#include "List.h"

using namespace std;

List::List()
    : head{nullptr}, tail{nullptr}
{
}

void List::insert_last(int value)
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
        insertion_sort(tmp);
    return;
}

void List::insertion_sort(Node *tmp)
{
    
    Node* dummy = new Node{};
    
    if (head->value > tmp->value)
    {
        head->next = dummy;
        tmp->next = head;
        head->next = dummy->next;
        head = tmp;
    }
    else if(tmp->next != nullptr){

    }
    
   // tmp->next = head->next;
   // head->next = tmp;
    
    /*
        Node *sort_tmp = new Node{value, nullptr};
        sort_tmp->next = head->next;
        head->next = sort_tmp;

        if (sort_tmp->value < head->value)
        {
            Node* dummy_ptr = new Node{};
            dummy_ptr->next = sort_tmp->next;

            head->next = dummy_ptr;

            sort_tmp->next = head;

            head->next = dummy_ptr->next;

            head = sort_tmp;

        }
        else
        head = head->next;
        insertion_sort(head->value);
        */
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

    for (int i = 0; i <= index - 1; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->value;
}

void List::print()
{
    Node *tmp = new Node{};
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
    Node *tmp = new Node{};
    tmp = head;

    while (tmp)
    {
        tmp = tmp->next;
        length++;
    }
    return length;
}
