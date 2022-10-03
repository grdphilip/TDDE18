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
    
    void insert(int value);
    bool is_empty() const;
    int size() const;
};

#endif