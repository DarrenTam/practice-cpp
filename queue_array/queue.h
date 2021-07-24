//
// Created by Darren on 07/24/2021.
//
#include <list>
#ifndef PARCTICE_CPP_QUEUE_H
#define PARCTICE_CPP_QUEUE_H


class Queue {
public:
    Queue();
    ~Queue();
    void Enqueue( int value );
    void Dequeue();
    bool empty() const;
    bool full() const;

    private:
    int mData[5]{} ;
    int mCurrent;
    int mSize;
};


#endif //PARCTICE_CPP_QUEUE_H
