//
// Created by FHang on 2021/7/9 16:18
//
#include <iostream>

using namespace std;

void print(int a, int b)
{
    cout << "普通函数调用" << endl;
}

template <class T>
T print(T a, T b)
{
    cout << "模板函数调用" << endl;
}

template <class T>
T print(T a, T b, T c)
{
    cout << "模板函数重载调用" << endl;
}

int main()
{
    // 1. 如果函数模板和普通函数都能实现，优先调用普通函数
    print(1, 2);

    // 2. 可以通过空模板参数列表来，强制调用函数模板
    print<>(1, 2);

    // 3. 函数模板可以发生重载
    print(1, 2, 3);

    // 4. 如果函数模板可以产生更好的匹配，优先调用函数模板
    // 因为 a， b为char，隐式类型转换调用普通函数，不如直接自动类型转换调用模板函数调用来的方便
    print('a', 'b');

    return 0;
}