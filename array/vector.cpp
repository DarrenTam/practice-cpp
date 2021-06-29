//
// Created by Darren on 06/25/2021.
//

#include "vector.h"
#include <iostream>


vector::Vector::~Vector() = default;

vector::Vector::Vector(int capacity) {
    mCapacity = capacity;
    mData = std::unique_ptr<int[]>(new int[capacity]);
}

void vector::Vector::Push(int item) {
    if (mSize + 1 > mCapacity) {
        upSize();
    }
    mData[mSize] = item;
    mSize++;
}


void vector::Vector::Prepend(int item) {
    if (mSize == 0) {
        mData[0] = item;
        mSize = 1;
    }
}

void vector::Vector::Debug() {
    std::cout << "size: " << std::endl;
    std::cout << mSize << std::endl;
    std::cout << "capacity: " << std::endl;
    std::cout << mCapacity << std::endl;
    std::cout << "data: " << std::endl;
    for (int i = 0; i < mSize; ++i) {
        std::cout << mData[i] << std::endl;
    }

}

int vector::Vector::Capacity() const {
    return mCapacity;
}

int vector::Vector::Size() const {
    return mSize;
}

bool vector::Vector::IsEmpty() const {
    return mSize == 0;
}

int vector::Vector::GetByIndex(int index) {
    return mData[index];
}

void vector::Vector::Insert(int item, int index) {
    if (mSize + 1 > mCapacity) {
        upSize();
    }

    for (int i = mSize; index <= i; i--) {
        mData[i + 1] = mData[i];
    }
    mData[index] = item;
    mSize++;
}

void vector::Vector::upSize() {
    int newCapcity = mCapacity * 2;
    std::unique_ptr<int[]> new_data(new int[newCapcity]);
    for (int i = 0; i < mSize; ++i) {
        new_data[i] = mData[i];
    }
    mData = std::move(new_data);
    mCapacity = newCapcity;
}

void vector::Vector::downSize() {
    int newCapcity = mCapacity / 2;
    std::unique_ptr<int[]> new_data(new int[newCapcity]);
    for (int i = 0; i < mSize; ++i) {
        new_data[i] = mData[i];
    }
    mData = std::move(new_data);
    mCapacity = newCapcity;
}

void vector::Vector::Remove(int item) {
    if (mSize - 1 < mCapacity / 2) {
        downSize();
    }

    for (int i = 0; i < mSize; ++i) {
        if (mData[i] == item) {
            Delete(i);
        }
    }
}

int vector::Vector::Pop() {
    if (mSize - 1 < mCapacity / 2) {
        downSize();
    }
    mData[mSize] = 0;
    mSize--;
    return  mData[mSize];

}

void vector::Vector::Delete(int index) {
    if (mSize - 1 < mCapacity / 2) {
        downSize();
    }
    for (int i = index; i < mSize + 1; ++i) {
        mData[i] = mData[i + 1];
    }
    mSize--;
}

int vector::Vector::Find(int item) {
    int data = -1;
    for (int i = 0; i < mSize; ++i) {
        if(mData[i] == item){
            data= mData[i];
            break;
        }
    }
    return data;
}

//
//int vector::Vector::Capacity() {
//    return 0;
//}
