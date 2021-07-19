//
// Created by FHang on 2021/7/12 15:57
//
#include <iostream>

using namespace std;

// 全局函数 类外实现
template <class name_T, class age_T>
class Person;

template <class name_T, class age_T>
void showPerson_2(Person<name_T, age_T> &person)
{
    cout << "Name: " << person.name << " -- " << "Age: " <<person.age << endl;
}

template <class name_T, class age_T>
class Person
{
    // 全局函数 类内实现
    friend void showPerson_1(Person<name_T, age_T> &person)
    {
        cout << "Name: " << person.name << " -- " << "Age: " <<person.age << endl;
    }

    // 全局函数 类外实现
    friend void showPerson_2<>(Person<name_T, age_T> &person);

private:
    name_T name;
    age_T age;

public:
    Person(name_T name, age_T age)
    {
        this->name = name;
        this->age = age;
    }
};

void demo1()
{
    cout << "全局函数，类内实现: ";
    Person<string, int> person("FH", 24);
    showPerson_1(person);
}

void demo2()
{
    cout << "全局函数，类外实现: ";
    Person<string, int> person("fh", 24);
    showPerson_2(person);
}

int main()
{
    demo1();
    demo2();
    return 0;
}