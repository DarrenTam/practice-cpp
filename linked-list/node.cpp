//
// Created by Darren on 06/29/2021.
//

#include "node.h"

void Node::SetData(int data) {
    mData = data;
}

void Node::SetNext( std::shared_ptr<Node> node) {
    mNext = std::move(node);
}

std::shared_ptr<Node> Node::GetNext() {
    return mNext;
}

int Node::GetData() {
    return mData;
}
