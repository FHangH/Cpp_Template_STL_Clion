//
// Created by FHang on 2021/9/21 16:23
//
#include <iostream>

using namespace std;

string string1 = "ABCDEFG";

void demo1()
{
    for (int i = 0; i < string1.size(); ++i)
    {
        cout << string1[i] << " ";
    }
    cout << endl;
}

void demo2()
{
    for (int i = 0; i < string1.size(); ++i)
    {
        cout << string1.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    demo1();
    demo2();
    return 0;
}