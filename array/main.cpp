#include <iostream>
#include "vector.h"

int main() {
    vector::Vector test(12);
    test.Debug();
    for (int i = 0; i < 30; ++i) {
        test.Push(i);
    }
    test.Insert(20,5);
    test.Delete(30);
    test.GetByIndex(0);
    test.Remove(18);
    test.Delete(16);
    test.Debug();

    return 0;
}
