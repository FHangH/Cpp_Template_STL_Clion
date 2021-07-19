//
// Created by FHang on 2021/7/12 14:08
//
#include <iostream>

using namespace std;

template <class name_T, class age_T>
class Person
{
public:
    name_T name;
    age_T age;

    Person(name_T name, age_T age)
    {
        this->name = name;
        this->age = age;
    }

    void showPerson()
    {
        cout << "Name: " << this->name << " -- " << "Age: " << this->age << endl;
    }
};

// 1. 指定传入类型：直接显示对象的数据类型
void print1(Person<string, int> &person)
{
    person.showPerson();
}

void demo1()
{
    Person<string, int> person("FH", 24);
    print1(person);
}

// 2. 参数模板化：将对象中的参数变为模板进行传递
template <class string_T, class int_T>
void print2(Person<string_T, int_T> &person)
{
    person.showPerson();
}

void demo2()
{
    Person<string, int> person("FF", 22);
    print2(person);
}

// 3. 整个类模板化：将对象类型模板化进行传递
template <class person_T>
void print3(person_T &person)
{
    person.showPerson();
}

void demo3()
{
    Person<string, int> person("HH", 20);
    print3(person);
}

int main()
{
    demo1();
    demo2();
    demo3();
    return 0;
}