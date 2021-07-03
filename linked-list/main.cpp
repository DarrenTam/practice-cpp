#include <iostream>
#include "node.h"
#include "linked_list.h"

int main() {
    auto list = std::make_shared<LinkedList>(std::make_shared<Node>(1));
    list->PushFront(10);
    list->PushFront(99);
    list->RemoveValue(10);
    list->Erase(1);
    list->Insert(1, 30);
    list->Reverse();
    list->PushFront(99);
    list->PushFront(60);
    list->PopFront();
    list->PushBack(20);
    list->PushBack(35);
    list->PopBack();
    list->PrintAllValue(); //expect 99 30 99 20
    return 0;
}
