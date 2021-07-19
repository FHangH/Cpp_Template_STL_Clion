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

template <class name_T, class age_T>
Person<name_T, age_T>::Person(name_T name, age_T age)
{
    this->name = name;
    this->age = age;
}

template <class name_T, class age_T>
void Person<name_T, age_T>::showPerson()
{
    cout << "Name: " << this->name << " -- " << "Age: " << this->age << endl;
}

#endif //TEMPLATE_STL_PERSON_H