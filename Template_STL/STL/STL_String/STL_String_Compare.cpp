//
// Created by FHang on 2021/9/21 16:12
//
#include <iostream>

using namespace std;

void demo()
{
    string string1 = "Hello";
    string string2 = "World";

    if (string1.compare(string2) == 0)
    {
        cout << "string1 string2" << " = " << endl;
    }
    else
    {
        cout << "string1 string2" << " != " << endl;
    }
}

int main()
{
    demo();
    return 0;
}