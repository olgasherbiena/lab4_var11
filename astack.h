#ifndef ASTACK_H
#define ASTACK_H
#include <string>
#include "Type.h"
class Astack{
    std::string *stack = new std::string[50]; // создаем фиксированный диннамический массив, максимум на 50 элементов
    int n;                               // количество элементов в массиве
    public:
    Astack();
    Astack(int count); // конструктор, в который передаем количество элементов, для заполнения массива
    Astack(const Astack &obj); // конструктор копирования
    ~Astack();
    std::string pop(); // возвращает значение последнего элемента и "удаляет его"
    void print();
    int num(); //вернуть к-во элементов в стеке
    bool isempty(); // проверка пуст ли массив
    void push(const Type &r); // добавляем новое значение
    void fromFile();
    void toFile();
};

#endif // ASTACK_H
