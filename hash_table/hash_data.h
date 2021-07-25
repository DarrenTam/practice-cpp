//
// Created by Darren on 07/25/2021.
//

#ifndef QUEUE_ARRAY_HASH_DATA_H
#define QUEUE_ARRAY_HASH_DATA_H


#include <string>

class HashData {
public:
    HashData() = default;
    ~HashData() = default;
    void SetKey(const std::string& key);
    void SetValue(std::string value);
    std::string GetKey();
    std::string GetValue();
private:
    std::string mKey;
    std::string mValue;
};

#endif //QUEUE_ARRAY_HASH_DATA_H
