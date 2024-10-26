#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <exception>
using namespace std;

template <class T>
class Keeper {
    T* ptr;
    int size;
public:
    Keeper();
    ~Keeper();
    void push();
    void pop(int);
    void write(string);
    void read(string);
    void show();
    void edit(int);
};

template<class T>
Keeper<T>::Keeper() {
    cout << "Вызов конструктора по умолчанию для класса Keeper" << endl << endl;
    ptr = nullptr;
    size = 0;
}

template<class T>
Keeper<T>::~Keeper() {
    cout << "Вызов деструктора для класса Keeper" << endl << endl;
    delete[] ptr;
}

template<class T>
void Keeper<T>::push() {
	T* temp = new T[size + 1];
	for (int i = 0; i < size; ++i) {
		temp[i] = ptr[i];
	}
	delete[] ptr;
	ptr = temp;
	cin >> ptr[size];
	++size;
	cout << endl << endl << "Новый объект добавлен" << endl << endl;
}

template < class T>
void Keeper<T>::pop(int num) {
	try {
		if (size == 0) {
			exception error("Пусто");
			throw error;
		}
		if (num < 0 || num >= size) {
			exception bug("Неверный номер");
			throw bug;
		}
		T* temp = new T[size - 1];
		ptr[num] = ptr[size - 1];
		for (int i = 0; i < size - 1; ++i) {
			temp[i] = ptr[i];
		}
		delete[] ptr;
		ptr = temp;
		--size;
		cout << endl << endl << "Объект добавлен" << endl << endl;
	}
	catch (exception& error) {
		cout << error.what() << endl << endl;
	}
}

template<class T>
void Keeper<T>::show() {
	setlocale(LC_ALL, "Russian");


	if (size == 0) {
		cout << "Пусто" << endl << endl;
	}
	else {
		for (int i = 0; i < size; ++i) {
			cout << ptr[i] << endl;
		}
	}
}