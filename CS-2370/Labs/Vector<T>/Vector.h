#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>
#include <stdexcept>

using std::size_t;

template <typename T> class Vector {
    enum {CHUNK = 10};
    T* data_ptr;
    size_t capacity;
    size_t n_elems;

    public:
        // Object Management
        Vector() {
            data_ptr = new T[CHUNK];
            capacity = CHUNK;
            n_elems = 0;
        }

        Vector(const Vector& v) {
            data_ptr = new T[v.capacity];
            capacity = v.capacity;
            n_elems = v.n_elems;

            for (size_t i = 0; i < n_elems; i++) {
                data_ptr[i] = v.data_ptr[i];
            }
        }

        Vector& operator=(const Vector& v) {
            if (this != &v) {
                delete[] data_ptr;

                data_ptr = new T[v.capacity];
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
        T front() const {
            if (n_elems == 0) {
                throw std::range_error("Vector is empty");
            }

            return data_ptr[0];
        }

        T back() const {
            if (n_elems == 0) {
                throw std::range_error("Vector is empty");
            }

            return data_ptr[n_elems - 1];
        }

        T at(size_t pos) const {
            if (pos < 0 || pos >= n_elems) {
                throw std::range_error("Out of range");
            }

            return data_ptr[pos];
        }

        size_t size() const {
            return n_elems;
        }

        bool empty() const{
            return n_elems == 0;
        }

        // Mutators
        T& operator[](size_t pos) {
            return data_ptr[pos];
        }

        void push_back(T item) {
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

        void insert(size_t pos, T item) {
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
        T* begin() {
            if (n_elems == 0) {
                return nullptr;
            }

            return data_ptr;
        }

        T* end() {
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

    private:
        void grow() {
            T* new_data = new T[capacity + CHUNK];
            for (size_t i = 0; i < n_elems; ++i) {
                new_data[i] = data_ptr[i];
            }
            delete[] data_ptr;
            data_ptr = new_data;
            capacity += CHUNK;
        }
};

#endif
