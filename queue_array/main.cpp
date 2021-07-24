


#include <iostream>
#include "queue.h"

int main () {
    Queue queue;
    queue.Enqueue(9);
    std::cout << queue.empty() << std::endl;
    queue.Dequeue();
    std::cout << queue.empty() << std::endl;
    std::cout << queue.full() << std::endl;
    for (int i = 0; i < 5; ++i) {
        queue.Enqueue(9);
    }
    std::cout << queue.full() << std::endl;
    return 0;
}
