#include "Vector.h"
#include <iostream>

// Private helper method
void Vector::grow() {
    std::cout << "grow" << std::endl;

    int* new_data_ptr = new int[capacity + 5];
    for (size_t i = 0; i < n_elems; i++) {
        new_data_ptr[i] = data_ptr[i];
    }

    delete[] data_ptr;
    data_ptr = new_data_ptr;
    capacity += 5;
}

// Object Management
Vector::Vector() {
    data_ptr = new int[CHUNK];
    capacity = CHUNK;
    n_elems = 0;
}

Vector::Vector(const Vector& v) {
    data_ptr = new int[v.capacity];
    capacity = v.capacity;
    n_elems = v.n_elems;

    for (size_t i = 0; i < n_elems; i++) {
        data_ptr[i] = v.data_ptr[i];
    }
}

Vector& Vector::operator=(const Vector& v) {
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

Vector::~Vector() {
    delete[] data_ptr;
}

// Accessors
int Vector::front() const {
    if (n_elems == 0) {
        throw std::range_error("Vector is empty");
    }

    return data_ptr[0];
}

int Vector::back() const {
    if (n_elems == 0) {
        throw std::range_error("Vector is empty");
    }

    return data_ptr[n_elems - 1];
}

int Vector::at(size_t pos) const {
    if (pos < 0 || pos >= n_elems) {
        throw std::range_error("Out of range");
    }

    return data_ptr[pos];
}

size_t Vector::size() const {
    return n_elems;
}

bool Vector::empty() const {
    return n_elems == 0;
}

// Mutators
int& Vector::operator[](size_t pos) {
    return data_ptr[pos];
}

void Vector::push_back(int item) {
    if (n_elems == capacity) {
        grow();
    }

    data_ptr[n_elems++] = item;
}

void Vector::pop_back() {
    if (n_elems == 0) {
        throw std::range_error("Vector is empty");
    }

    n_elems--;
}

void Vector::erase(size_t pos) {
    if (pos < 0 || pos >= n_elems) {
        throw std::range_error("Out of range");
    }

    for (size_t i = pos; i < n_elems - 1; i++) {
        data_ptr[i] = data_ptr[i + 1];
    }

    n_elems--;
}

void Vector::insert(size_t pos, int item) {
    if (n_elems == capacity) {
        grow();
    }

    for (size_t i = n_elems; i > pos; i--) {
        data_ptr[i] = data_ptr[i - 1];
    }

    data_ptr[pos] = item;
    n_elems++;
}

void Vector::clear() {
    n_elems = 0;
}

// Iterators
int* Vector::begin() {
    if (n_elems == 0) {
        return nullptr;
    }

    return data_ptr;
}

int* Vector::end() {
    if (n_elems == 0) {
        return nullptr;
    }

    return data_ptr + n_elems;
}

// Comparators
bool Vector::operator==(const Vector& v) const {
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

bool Vector::operator!=(const Vector& v) const {
    return !(*this == v);
}
