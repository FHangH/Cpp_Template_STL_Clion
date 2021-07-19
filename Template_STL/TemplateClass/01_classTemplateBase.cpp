//
// Created by FHang on 2021/7/9 17:17
//
#include <iostream>

using namespace std;

// 类和结构体都可以这么用
template <class name_T, class age_T>
struct Person
{
    name_T name;
    age_T age;

    Person(name_T name, age_T age)
    {
        this->name = name;
        this->age = age;
    }
    ~Person()
    {
        cout << "Name: " << this->name << " " << "Age: " << this->age << endl;
    }
};

void demo()
{
    Person<string, int>("fh", 24);
}

int main()
{
    demo();
    return 0;
}