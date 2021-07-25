//
// Created by Darren on 07/25/2021.
//

#include "hash_table.h"

HashTable::HashTable(const int size) {
    mSize = size;
    mData = std::make_unique<HashData>();
}

int HashTable::Hash(const std::string &key) const {
    int hash = 0;

    int key_length = key.length();
    for (int i = 0; i < key_length; ++i) {
        hash = hash * 31 + key[i];
    }

    return abs(hash % mSize);
}

void HashTable::Add(const std::string key, const std::string value) {
    int index = Hash(key);

    if (mData.get()[index].GetKey() != key) {
        while (!mData.get()[index].GetKey().empty()) {
            index = (index + 1) % mSize;
        }
    }

    mData.get()[index].SetKey(key);
    mData.get()[index].SetValue(value);
}

std::string HashTable::Get(const std::string &key) {
    int index = Hash(key);
    if (mData.get()[index].GetKey() != key) {
        while (!mData.get()[index].GetKey().empty()) {
            index = (index + 1) % mSize;
        }
    }
    return mData.get()[index].GetValue();
}

bool HashTable::Exist(const std::string &key) {
    bool exist = false;
    int index = Hash(key);
    if (mData.get()[index].GetKey() != key) {
        while (!mData.get()[index].GetKey().empty()) {
            index = (index + 1) % mSize;
        }
    } else {
        exist = true;
    }
    return exist;
}

void HashTable::Remove(const std::string &key) {
    int index = Hash(key);
    if (mData.get()[index].GetKey() != key) {
        while (!mData.get()[index].GetKey().empty()) {
            index = (index + 1) % mSize;
        }
    }else{
        mData.get()[index].SetKey("");
        mData.get()[index].SetValue("");
    }
}


