//
// Created by FHang on 2021/7/12 15:30
//

// 包含头文件 不管用 因为类模板的成员函数 只在调用时创建 所以编译时无法链接到外部文件
// #include "person.h"

// 第一种：直接包含 .cpp 文件
// 直接包含 源文件 源文件中包含头文件 同时实现了 类模板的成员函数
#include "person.cpp"

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