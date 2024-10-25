#pragma once
#include <iostream>
#include <exception>
using namespace std;

template <class T>
class Keeper {
    T* ptr;
    int size;

public:
    Keeper();
    ~Keeper();
    void show();
};

template<class T>
Keeper<T>::Keeper() : ptr(nullptr), size(0) {
    cout << "Вызов конструктора для Keeper" << endl;
}

template<class T>
Keeper<T>::~Keeper() {
    delete[] ptr;
    cout << "Вызов деструктора для Keeper" << endl;
}

template<class T>
void Keeper<T>::show() {
    if (size == 0) cout << "Пусто" << endl;
    else for (int i = 0; i < size; ++i) cout << ptr[i] << endl;
}