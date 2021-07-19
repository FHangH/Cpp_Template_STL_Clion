//
// Created by FHang on 2021/7/9 15:54
//
#include <iostream>

using namespace std;

int add(int a,  int b)
{
    return a + b;
}

template <class T>
T add_T(T a, T b)
{
    return a + b;
}

int main()
{
    int a = 10;
    // c -> ASCII = 97
    char c = 'a';

    // 普通函数 可以隐式类型转换
    cout << add(a, c) << endl;

    // 模板函数 自动类型转换 无法隐式类型转换
    // cout << add_T(a, c) << endl;
    // 指定类型转换 可以隐式类型转换
    cout << add_T<int>(a, c) << endl;

    return 0;
}