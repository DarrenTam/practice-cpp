#include <iostream>
#include "hash_table.h"

int main() {
    HashTable hashTable(30);
    hashTable.Add("zzzz", "jojo");
    hashTable.Add("zzzz", "jojo999");
    hashTable.Add("zzzhz", "jojo2");
    std::cout << hashTable.Get("zzzz") << std::endl;
    std::cout << hashTable.Get("null") << std::endl;
    std::cout << hashTable.Exist("zzzhz") << std::endl;
    std::cout << hashTable.Exist("z999z") << std::endl;
    hashTable.Remove("zzzhz");
    std::cout << hashTable.Exist("zzzhz") << std::endl;
}
