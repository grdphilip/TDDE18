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
        Node* next{};
    };

    Node* head{};
    Node* tail{};
    

public:
    List();
    int length{0};
    
    void insert(int value);
    void sorted_insert(Node* tmp_sort);
    void remove();
    void get_index_at(int index);
    void print();
    bool is_empty() const;
    int size() const;
    
   
};

#endif