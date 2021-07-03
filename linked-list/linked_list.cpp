//
// Created by Darren on 06/29/2021.
//

#include <iostream>
#include "linked_list.h"


int LinkedList::Size() const {
    return 1;
}

bool LinkedList::Empty() const {
    return mHead == nullptr;
}

int LinkedList::ValueAt(int index) {
    std::shared_ptr<Node> current = std::move(mHead);
    while (current->GetNext()) {
        current = std::move(current->GetNext());
    }
    return current->GetData();
}

void LinkedList::PushFront(int value) {
    auto newNode = std::make_shared<Node>(value);
    newNode->SetNext(std::move(mHead));
    mHead = std::move(newNode);
}

void LinkedList::PopFront() {
    mHead = std::move(mHead->GetNext());
}

void LinkedList::PushBack(int value) {
    auto current = mHead;
    while (current->GetNext()) {
        current = current->GetNext();
    }
    current->SetNext(std::make_shared<Node>(value));
}

void LinkedList::PopBack() {
    auto current = mHead;
    std::shared_ptr<Node> prev = nullptr;
    while (current->GetNext()) {
        prev = current;
        current = current->GetNext();
    }
    prev->SetNext(nullptr);
}

int LinkedList::GetFront() {
    return mHead->GetData();
}

int LinkedList::GetBack() {
    auto current = mHead;
    while (current->GetNext()) {
        current = current->GetNext();
    }
    return current->GetData();
}

int LinkedList::Insert(int index, int value) {
    auto current = mHead;
    auto next = mHead->GetNext();
    for (int i = 0; i < index - 1; ++i) {
        next = next->GetNext();
        current = current->GetNext();
    }

    current->SetNext(std::make_shared<Node>(value));
    current = current->GetNext();
    if (next != nullptr) {
        current->SetNext(next);
    }

    return 0;
}

void LinkedList::Erase(int index) {
    auto current = mHead;
    auto next = mHead->GetNext();
    for (int i = 0; i < index - 1; ++i) {
        next = next->GetNext();
        current = current->GetNext();
    }
    if (next != nullptr) {
        current->SetNext(next->GetNext());
    }
}

int LinkedList::ValueNFromEnd(int index) {
    auto current = mHead;
    for (int i = 0; i < index; ++i) {

    }
    return 0;
}

void LinkedList::Reverse() {
    auto current = mHead;
    std::shared_ptr<Node> prev = nullptr;
    std::shared_ptr<Node> next = nullptr;

    while (current != nullptr) {
        next = current->GetNext();
        current->SetNext(prev);
        prev = current;
        current = next;
    }
    mHead = prev;
}

void LinkedList::RemoveValue(int value) {
    auto current = mHead;
    std::shared_ptr<Node> prev = nullptr;
    while (current->GetNext()){
        if(current->GetData() == value){
            break;
        }
        prev = current;
        current = current->GetNext();
    }
    prev->SetNext(current->GetNext());
}

void LinkedList::PrintAllValue() {
    auto value = mHead;
    while (value->GetNext()) {
        std::cout << value->GetData() << std::endl;
        value = value->GetNext();
    }
    std::cout << value->GetData() << std::endl;
}

LinkedList::~LinkedList() = default;
