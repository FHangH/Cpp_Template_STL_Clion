//
// Created by FHang on 2021/9/21 16:35
//
#include <iostream>

using namespace std;

void demoInsert()
{
    string str1 = "Hello ";
    string str2 = "world ";

    str1.insert(6, "world ");
    cout << "str1 = " << str1 << endl;

    str1.insert(12, str2);
    cout << "str1 = " << str1 << endl;

    str1.insert(18, 6, '!');
    cout << "str1 = " << str1 << endl;
}

void demoDelete()
{
    string str3 = "Hello World";
    str3.erase(5, 6);
    cout << "str3 = " << str3 << endl;
}

int main()
{
    demoInsert();
    demoDelete();
    return 0;
}