//
// Created by Darren on 07/24/2021.
//

#include "queue.h"

void Queue::Enqueue(int value) {
    if (!full()) {
        mData[mCurrent] = value;
        mCurrent++;
    }
}

void Queue::Dequeue() {
    if (!empty()) {
        mData[mCurrent] = 0;
        mCurrent--;
    }
}

bool Queue::empty() const {
    return mCurrent == 0;
}

bool Queue::full() const {
    return mSize-1 == mCurrent ;
}

Queue::Queue() {
    mSize = 5;
    mCurrent = 0;
    mData[0] = 0;
};

Queue::~Queue() = default;
