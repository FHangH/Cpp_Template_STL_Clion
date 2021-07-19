//
// Created by Admin on 2021/7/12.
//

#ifndef TEMPLATE_STL_PERSON_H
#define TEMPLATE_STL_PERSON_H

#include <iostream>

using namespace std;

template <class name_T, class age_T>
class Person
{
public:
    name_T name;
    age_T age;

    Person(name_T name, age_T age);
    void showPerson();
};

#endif //TEMPLATE_STL_PERSON_H