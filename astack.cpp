#include "astack.h"
#include <iostream>
#include "Input_Output.h"

//output data in the file
void Astack::toFile() {
    std::ofstream ofs("C:\\Users\\User\\Documents\\lab4\\result.txt");
    if (ofs.is_open()) {
        for (int i = n-1; i >= 0; --i)
            ofs << outsetup << stack[i] << "\n";
        std::cout << std::endl;
    }
    ofs.close();
}

// первый ряд - считываем количество элементов
// далее считываем "массив" слов
void Astack::fromFile() {
    std::ifstream ifs("C:\\Users\\User\\Documents\\lab4\\1.txt"); // open file
    if (ifs.is_open()) {
        ifs >> n;
        std::string txt;
        for(int i = 0; i < n; ++i){
           ifs>> insetup >> stack[i];
        }
    }
    ifs.close();
}

Astack::Astack(){
    n = 0;
}
Astack::Astack(int count)
{
    n = count;
    std::cout << "Please enter " << count << " values:\n";
    for (int i=0; i<n; i++){
        std::cout << i+1 << ". ";
        std::cin >> *(stack + i);
    }
}

Astack::Astack(const Astack &obj)
{
    n = obj.n;
    for (int i=0; i<n; i++)
        stack[i]=obj.stack[i];

}

Astack::~Astack() {
    delete [] stack;
}

//вывести на экран
void Astack::print() {
    for (int i = n-1; i >= 0; --i)
        std::cout << stack[i] << " ";
    std::cout << std::endl;
}

int Astack::num(){
    return n;
}

// если н == 0 -> массив пуст -> возвращаем 1
// если н != 0 - > массив не пуст -> возвращаем 0
bool Astack::isempty(){
    return (n == 0);
}

std::string Astack::pop(){
    --n; // "удаляем последний элемент"
    return stack[n];
}

void Astack::push(const Type &r){
    stack[n] = r.data;
    ++n;
}
