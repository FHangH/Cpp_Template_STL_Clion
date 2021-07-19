//
// Created by FHang on 2021/7/12 15:04
//
#include <iostream>

using namespace std;

template <class name_T, class age_T>
class Person
{
public:
    name_T name;
    age_T age;

    // 类模板 内 声明
    Person(name_T name, age_T age);
    void showPerson();
};

// 类模板 外 实现
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