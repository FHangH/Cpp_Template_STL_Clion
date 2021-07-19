//
// Created by FHang on 2021/7/12 13:51
//
#include <iostream>

using namespace std;

class Person1
{
public:
    void showPerson1()
    {
        cout << "Show Person 1" << endl;
    }
};

class Person2
{
public:
    void showPerson2()
    {
        cout << "Show Person 2" << endl;
    }
};

template <class class_T>
class Person_T
{
public:
    class_T person;

    // 传入的类型不确定，所以默认情况下，编译器不会保错
    // 此时，类模板中的函数不会被创建，当正确调用类模板时，才会创建
    void showFunc1()
    {
        person.showPerson1();
    }
    void showFunc2()
    {
        person.showPerson2();
    }
};

void demo()
{
    Person_T<Person1> p1;
    p1.showFunc1();
    // 传入的是Person1，所以编译时，编译器创建类模板内的成员函数时，找不到可以调用的showPerson2()
    // p1.showFunc2();

    // 传入Person2，才能调用showPerson2()，但同样也找不到showPerson1()
    Person_T<Person2> p2;
    p2.showFunc2();
}

int main()
{
    demo();
    return 0;
}