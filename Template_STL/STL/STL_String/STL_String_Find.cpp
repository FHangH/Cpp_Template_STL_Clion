//
// Created by FHang on 2021/9/21 15:46
//
#include <iostream>

using namespace std;

void findString()
{
    string string1 = "AABBCCBBAA";
    int pos1 = string1.find("BB");
    cout << "BB pos1 = " << pos1 << endl;

    int pos2 = string1.rfind("BB");
    cout << "BB pos2 = " << pos2 << endl;
}

void replaceString()
{
    string string1 = "ABCDE";
    string1.replace(2, 3, "123");
    cout << "String1 = " << string1 << endl;
}

int main()
{
    findString();
    replaceString();
    return 0;
}