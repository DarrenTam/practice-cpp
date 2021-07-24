//
// Created by Darren on 07/24/2021.
//

#include "queue.h"


void Queue::Enqueue(int value) {
 mData.push_front(value);
}

void Queue::Dequeue() {
    mData.pop_front();
}

bool Queue::empty() {
    return mData.empty();
}

Queue::Queue() = default;

Queue::~Queue() = default;
