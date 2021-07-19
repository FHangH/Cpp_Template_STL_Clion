//
// Created by FHang on 2021/7/9 13:55
//
#include <iostream>

using namespace std;

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
    char c1 = 'A';
    // 自动类型推导
    // num1 和 num2 都是 int 类型，可以自动推导出是一致类型
    swap_T(num1, num2);

    // c1是char类型，是错误的使用方式
    // swap_T(c1, num2);
    cout << "自动类型: " ;
    cout << "num1: " << num1 << " -" << " num2: " << num2 << endl;
}

int main()
{
    demo1();
    return 0;
}