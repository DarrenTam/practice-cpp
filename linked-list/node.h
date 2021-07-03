//
// Created by Darren on 06/29/2021.
//

#ifndef PARCTICE_CPP_NODE_H
#define PARCTICE_CPP_NODE_H


#include <memory>

class Node {
public:
    Node(int value) : mNext(nullptr), mData(value) {}

    ~Node() {}

    void SetData(int data);

    void SetNext(std::shared_ptr<Node> node);

    std::shared_ptr<Node> GetNext();

    int GetData();


private:
    std::shared_ptr<Node> mNext;
    int mData;
};


#endif //PARCTICE_CPP_NODE_H
