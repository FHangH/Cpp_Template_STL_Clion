//
// Created by FHang on 2021/9/21 15:12
//
#include <iostream>

using namespace std;

void demo()
{
    string string1 = "Hello ";
    string1 += "World";
    cout << "String1 = " << string1 << endl;

    string string2 = "Hi ";
    string2 += string1;
    cout << "String2 = " << string2 << endl;

    string string3 = "Age ";
    string3 += '8';
    cout << "String3 = " << string3 << endl;

    string string4 = "Hello ";
    string4.append("World");
    cout << "String4 = " << string4 << endl;

    string string5 = "Hi ";
    string5.append(string4);
    cout << "String5 = " << string5 << endl;

    string string6;
    string6.append("Hello World", 4);
    cout << "String6 = " << string6 << endl;

    string string7 = string5;
    string7.append("Hello World", 5, 6);
    cout << "String7 = " << string7 << endl;
}

int main()
{
    demo();
    return 0;
}