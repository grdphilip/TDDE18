#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <sstream>
#include <iomanip>

class List {

private:

struct Node {
    int value{};
    Node* next{};
};
Node* head{};
Node* tail{};
    

public:
    List();

    void insert();
    bool is_empty() const;
    int size() const;
};

#endif