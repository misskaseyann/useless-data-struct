#include <iostream>
#include "include/AUDS.h"

int main() {
    AUDS<char> s;
    s.push('o');
    s.push('9');
    s.push('^');
    s.push('p');
    char th = s.pop();
    std::cout << th << std::endl;
    char nh = s.pop();
    std::cout << nh << std::endl;
    char nn = s.pop();
    std::cout << nn << std::endl;
}