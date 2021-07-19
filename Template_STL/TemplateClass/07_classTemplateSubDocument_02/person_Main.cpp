//
// Created by FHang on 2021/7/12 15:47
//
#include "person.hpp"

void demo()
{
    Person<string, int> person("fh", 24);
    person.showPerson();
}

int main()
{
    demo();
    return 0;
}