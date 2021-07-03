//
// Created by Darren on 06/29/2021.
//

#ifndef PARCTICE_CPP_LINKED_LIST_H
#define PARCTICE_CPP_LINKED_LIST_H


#include "node.h"

class LinkedList {
public:
    LinkedList(std::shared_ptr<Node> node) :  mHead(std::move(node)){};

    ~LinkedList();

    int Size() const;

    bool Empty() const;

    int ValueAt(int index);

    void PushFront(int value);

    void PopFront();

    void PushBack(int value);

    void PopBack();

    int GetFront();

    int GetBack();

    int Insert(int index, int value);

    void Erase(int index);

    int ValueNFromEnd(int index);

    void Reverse();

    void RemoveValue(int value);

    void PrintAllValue();

private:
    std::shared_ptr<Node> mHead;
};


#endif //PARCTICE_CPP_LINKED_LIST_H
