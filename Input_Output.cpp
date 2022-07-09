#include "Input_Output.h"
#include <fstream>
#include <iomanip>
#include "Input_Output.h"

//create function to manipulate input data
std::istream &insetup (std::istream &ifs)
{
  ifs.setf(std::ios::skipws | std::ios::hex); // пропуск пробелов и считывание в 10-ричной сист.
  return ifs;
}

//create function to manipulate output data
std::ostream &outsetup (std::ostream &ofs)

{
    ofs.fill(' ');
    ofs << std::setw(7);//Sets the field width to be used on output operations
    return ofs;
}
