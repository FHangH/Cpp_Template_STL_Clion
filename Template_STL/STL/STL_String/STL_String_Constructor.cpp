//
// Created by FHang on 2021/7/20 9:43
//
#include <iostream>

using namespace std;

void demo()
{
    // 创建一个空的字符串
    string string1;

    // 使字符串初始化
    const char *str = "HelloWorld";
    string string2(str);
    cout << "string2 = " << string2 << endl;

    // 用一个string对象初始化另一个string对象
    string string3(string2);
    cout << "string3 = " << string3 << endl;

    // 使用n个字符c，初始化
    string string4(10, 'a');
    cout << "string4 = " << string4 << endl;
}

int main()
{
    demo();
    return 0;
}