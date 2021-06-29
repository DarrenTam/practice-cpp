//
// Created by Darren on 06/25/2021.
//

#ifndef PARCTICE_CPP_VECTOR_H
#define PARCTICE_CPP_VECTOR_H

#include <memory>

namespace vector {

    class Vector {
    public:
        Vector(int capacity);

        ~Vector();

        int Size() const;

        int Capacity() const;

        bool IsEmpty() const;

        int GetByIndex(int index);

        void Push(int item);

        void Insert(int item, int index);

        void Prepend(int item);

        int Pop();

        void Delete(int index);

        void Remove(int item);

        int Find(int item);

        void Debug();

    private:
        int mCapacity;
        int mSize{};
        std::unique_ptr<int[]> mData;

        void upSize();

        void downSize();

    };


}


#endif //PARCTICE_CPP_VECTOR_H
