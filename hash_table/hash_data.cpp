//
// Created by Darren on 07/25/2021.
//

#include "hash_data.h"

void HashData::SetKey( const std::string& key) {
    mKey = key;
}

void HashData::SetValue(const std::string value) {
    mValue = value;
}

std::string HashData::GetKey() {
    return mKey;
}

std::string HashData::GetValue() {
    return mValue;
}


