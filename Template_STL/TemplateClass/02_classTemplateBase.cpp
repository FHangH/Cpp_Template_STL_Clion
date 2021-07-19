//
// Created by FHang on 2021/7/11 7:40
//
#include <iostream>

using namespace std;

template <class name_T, class age_T>
struct Person01
{
    name_T name;
    age_T age;

    Person01(name_T name, age_T age)
    {
        this->name = name;
        this->age = age;
    }
    ~Person01()
    {
        cout << "Name: " << this->name << " " << "Age: " << this->age << endl;
    }
};

// 用结构体来代替类了
// 类模板中，可以在参数列表中，指明默认参数类型，生成对象时，不需要再显示指定类型
template <class name_T = string, class age_T = int>
struct Person02
{
    name_T name;
    age_T age;

    Person02(name_T name, age_T age)
    {
        this->name = name;
        this->age = age;
    }
    ~Person02()
    {
        cout << "Name: " << this->name << " " << "Age: " << this->age << endl;
    }
};

void demo_P1()
{
    // 类模板没有自动类型推导，所以这个写法是错误的
    // Person01<> person01("FH", 24);

    // 需要显示指定类型
    Person01<string, int> person01("FH", 24);
}

void demo_P2()
{
    Person02<> person02("XX", 24);
}

int main()
{
    demo_P1();
    demo_P2();
    return 0;
}