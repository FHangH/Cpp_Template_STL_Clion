//
// Created by FHang on 2021/7/9 13:35
//
#include <iostream>

using namespace std;

// 函数模板
// 声明一个模板，通用数据符号 T， 防止编译器报错
template <typename T>
void swap_T(T &num1, T &num2)
{
    T tempNum = num1;
    num1 = num2;
    num2 = tempNum;
}

void demo1()
{
    int num1 = 10;
    int num2 = 20;
    // 自动类型推导
    swap_T(num1, num2);
    cout << "自动类型: " ;
    cout << "num1: " << num1 << " -" << " num2: " << num2 << endl;

    // 指定类型
    swap_T<int>(num1, num2);
    cout << "指定类型: " ;
    cout << "num1: " << num1 << " -" << " num2: " << num2 << endl;
}

int main()
{
    demo1();
    return 0;
}