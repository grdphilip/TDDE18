
#include "List.h"

using namespace std;

List::List()
    : head{nullptr}, tail{nullptr}
{
}
List::List(const List &orgObj)
{
    if (orgObj.head == nullptr)
    {
        head == nullptr;
    }
    else
    {
        Node *tmp{};
        tmp = orgObj.head;

        while (tmp->next != nullptr)
        {
            Node *copy = new Node{tmp->value, nullptr};
            if (is_empty())
            {
                head = copy;
                tail = copy;
                head->next = tail;
            }

            tail->next = copy;
            tail = copy;

            tmp = tmp->next;
        }
        Node *copy = new Node{tmp->value, nullptr};
        tail->next = copy;
        tail = copy;
    }
}

List::List(List &&orgObj)
{
    if (orgObj.head == nullptr)
    {
        head == nullptr;
    }
    else if (orgObj.head->next != nullptr)
    {
        head = orgObj.head;
        orgObj.head = nullptr;
        delete orgObj.head;
    }
}

List &List::operator=(const List &orgObj)
{
    List tmp{orgObj};
    Node *dummy{nullptr};
    dummy = head;
    head = tmp.head;
    tmp.head = dummy;
    return *this;
}

List &List::operator=(List &&orgObj)
{
    head = orgObj.head;
    orgObj.head = nullptr;
    delete orgObj.head;
    return *this;
}

List::~List()
{
    while (!is_empty())
    {
        Node *tmp = head->next;
        delete head;
        head = tmp;
    }
}

void List::insert(int const &value)
{
    Node *tmp = new Node{value, nullptr};

    if (is_empty())
    {
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
    Node *iterator{nullptr};
    iterator = head;

    while (iterator->next != nullptr)
    {
        if (tmp_sort->value > iterator->value)
        {
            if (tmp_sort->value < iterator->next->value)
            {
                Node *dummy{nullptr};
                dummy = iterator->next;
                iterator->next = tmp_sort;
                tmp_sort->next = dummy;
                return;
            }
            iterator = iterator->next;
        }
    }
    tail->next = tmp_sort;
    tail = tmp_sort;
    return;
}

void List::remove(int const &value)
{
    Node *tmp{nullptr}, *dummy{nullptr};
    tmp = head;
    while (tmp->next != nullptr)
    {
        if (tmp->next->value == value)
        {
            dummy = tmp->next;
            tmp->next = dummy->next;
            dummy->next = nullptr;
            delete dummy;
            return;
        }
        tmp = tmp->next;
    }
}

int const &List::get_index_at(int const &index)
{
    Node *tmp;
    tmp = head;

    for (int i = 0; i <= index - 1; i++)
    {
        tmp = tmp->next;
    }
    return tmp->value;
}

void List::print()
{
    Node *tmp;
    tmp = head;

    print_list(tmp);
}

void List::print_list(Node *tmp)
{
    if (tmp != nullptr)
    {
        cout << " -> " << tmp->value;
        print_list(tmp->next);
    }
}

bool const List::is_empty()
{
    return head == nullptr;
}

int const List::size()
{

    int length{0};
    Node *tmp;
    tmp = head;

    while (tmp)
    {
        tmp = tmp->next;
        length++;
    }

    return length;
}
