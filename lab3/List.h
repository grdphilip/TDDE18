#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <sstream>
#include <iomanip>

/*
Class
@param
*/

class List
{

private:
    struct Node
    {
        int value{};
        Node *next{};
    };

    Node *head{};
    Node *tail{};

public:
    List();
    List(const List &orgObj);
    List(List &&orgObj);
    ~List();

    List &operator=(const List &orgObj);
    List &operator=(List &&orgObj);
    void insert(int const &value);
    void sorted_insert(Node *tmp_sort);
    void remove(int const &value);
    int const &get_index_at(int const &index);
    void print();
    void print_list(Node *tmp);
    bool const is_empty();
    int const size();
};

#endif
