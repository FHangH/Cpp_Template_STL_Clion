//
// Created by FHang on 2021/7/12 14:34
//
#include <iostream>

using namespace std;

template <class class_T>
class Base
{
public:
    class_T base_Info;
};

class Derived_1 : Base<int> {};

template <class deClass_T, class baseClass_T>
class Derived_2 : Base<baseClass_T>
{
public:
    deClass_T derived_Info;

    Derived_2()
    {
        cout << "deClass_T: " << typeid(deClass_T).name() << endl;
        cout << "baseClass_T: " << typeid(baseClass_T).name() << endl;
    }
};

void demo()
{
    Derived_2<int, char> derived2;
}

int main()
{
    demo();
    return 0;
}