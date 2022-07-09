#include <iostream>
#include <string>
using namespace std;
#include "astack.h"
#include "Type.h"

int main(){

    // stack работает по принцыпу: последний пришел, первый вышел
    // допустим вводим B E T
    Astack obj1;
    obj1.fromFile();
    obj1.toFile();
}
