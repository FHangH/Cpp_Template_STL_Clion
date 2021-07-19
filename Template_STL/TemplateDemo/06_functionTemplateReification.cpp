//
// Created by FHang on 2021/7/9 16:44
//
#include <iostream>

using namespace std;

// 自定义的结构体数据类型
struct Person
{
    Person(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    int age;
    string name;
};

template <class T>
bool compare_T(T &a, T &b)
{
    return a == b;
}

// 具体化模板函数的实现，当传入参数类型为 Person，优先调用这个模板函数
template<> bool compare_T(Person &p1, Person &p2)
{
    return p1.age == p2.age && p1.name == p2.name;
}

void demo1()
{
    int a = 10;
    int b = 20;
    bool rel = compare_T(a, b);
    string printInfo = rel ? "a = b" : "a != b";
    cout << printInfo << endl;
}

void demo2()
{
    Person p1(10, "fh");
    Person p2(10, "fh");
    bool rel = compare_T(p1, p2);
    string printInfo = rel ? "p1 = p2" : "p1 != p2";
    cout << printInfo << endl;
}

int main()
{
    demo1();
    demo2();
    return 0;
}