#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>
#include <stdexcept>
#include <iostream>

using std::size_t;
class Vector {
    enum {CHUNK = 10};
    int* data_ptr;
    size_t capacity;
    size_t n_elems;
    void grow() {
        std::cout << "grow" << std::endl;

        int* new_data_ptr = new int[capacity + 5];
        for (size_t i = 0; i < n_elems; i++) {
            new_data_ptr[i] = data_ptr[i];
        }

        delete[] data_ptr;
        data_ptr = new_data_ptr;
        capacity += 5;
    }

    public:
        // Object Mgt.
        Vector() {
            data_ptr = new int[CHUNK];
            capacity = CHUNK;
            n_elems = 0;
        }

        Vector(const Vector& v) {
            data_ptr = new int[v.capacity];
            capacity = v.capacity;
            n_elems = v.n_elems;

            for (size_t i = 0; i < n_elems; i++) {
                data_ptr[i] = v.data_ptr[i];
            }
        }

        Vector& operator=(const Vector& v) {
            if (this != &v) {
                delete[] data_ptr;

                data_ptr = new int[v.capacity];
                capacity = v.capacity;
                n_elems = v.n_elems;

                for (size_t i = 0; i < n_elems; i++) {
                    data_ptr[i] = v.data_ptr[i];
                }
            }

            return *this;
        }

        ~Vector() {
            delete[] data_ptr;
        }

        // Accessors
        int front() const {
            if (n_elems == 0) {
                throw std::range_error("Vector is empty");
            }

            return data_ptr[0];
        }

        int back() const {
            if (n_elems == 0) {
                throw std::range_error("Vector is empty");
            }

            return data_ptr[n_elems - 1];
        }

        int at(size_t pos) const {
            if (pos < 0 || pos >= n_elems) {
                throw std::range_error("Out of range");
            }

            return data_ptr[pos];
        }

        size_t size() const {
            return n_elems;
        }

        bool empty() const {
            return n_elems == 0;
        }

        // Mutators
        int& operator[](size_t pos) {
            return data_ptr[pos];
        }

        void push_back(int item) {
            if (n_elems == capacity) {
                grow();
            }

            data_ptr[n_elems++] = item;
        }
        void pop_back() {
            if (n_elems == 0) {
                throw std::range_error("Vector is empty");
            }

            n_elems--;
        }
        void erase(size_t pos) {
            if (pos < 0 || pos >= n_elems) {
                throw std::range_error("Out of range");
            }

            for (size_t i = pos; i < n_elems - 1; i++) {
                data_ptr[i] = data_ptr[i + 1];
            }

            n_elems--;
        }

        void insert(size_t pos, int item) {
            if (n_elems == capacity) {
                grow();
            }

            for (size_t i = n_elems; i > pos; i--) {
                data_ptr[i] = data_ptr[i - 1];
            }

            data_ptr[pos] = item;
            n_elems++;
        }

        void clear() {
            n_elems = 0;
        } 

        // Iterators
        int* begin() {
            if (n_elems == 0) {
                return nullptr;
            }

            return data_ptr;
        }
        int* end() {
            if (n_elems == 0) {
                return nullptr;
            }

            return data_ptr + n_elems;
        }

        // Comparators
        bool operator==(const Vector& v) const {
            if (n_elems != v.n_elems) {
                return false;
            }

            for (size_t i = 0; i < n_elems; i++) {
                if (data_ptr[i] != v.data_ptr[i]) {
                    return false;
                }
            }

            return true;
        }

        bool operator!=(const Vector& v) const {
            return !(*this == v);
        }
};

#endif