//
// Created by FHang on 2021/9/21 14:56
//
#include <iostream>

using namespace std;

void demo()
{
    string string1;
    string1 = "hello world";
    cout << "string1 = " << string1 << endl;

    string string2;
    string2 = string1;
    cout << "string2 = " << string2 << endl;

    string string3;
    string3 = "A";
    cout << "string3 = " << string3 << endl;

    string string4;
    string4.assign("hello world");
    cout << "string4 = " << string4 << endl;

    string string5;
    string5.assign("hello world", 3);
    cout << "string5 = " << string5 << endl;

    string string6;
    string6.assign(6, 'a');
    cout << "string6 = " << string6 << endl;
}

int main()
{
    demo();
    return 0;
}