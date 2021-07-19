//
// Created by Admin on 2021/7/12.
//

#include "person.h"

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