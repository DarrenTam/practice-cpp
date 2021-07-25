//
// Created by Darren on 07/25/2021.
//

#ifndef QUEUE_ARRAY_HASH_TABLE_H
#define QUEUE_ARRAY_HASH_TABLE_H


#include "hash_data.h"

class HashTable {
public:
    HashTable() = default;
    explicit HashTable(int size);
    void Add(const std::string key, const std::string value);
    std::string Get(const std::string& key);
    int Hash(const std::string& key) const;
    bool Exist(const std::string &key);
    void Remove();

    void Remove(const std::string &key);

private:
    std::unique_ptr<HashData> mData;
    int mSize;

};


#endif //QUEUE_ARRAY_HASH_TABLE_H
