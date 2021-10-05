//
// Created by FHang on 2021/10/5 14:59
//
#include <iostream>

using namespace std;

void subStringDemo()
{
    string str1 = "Hello World";

    str1 = str1.substr(0, 5);
    cout << "str1 = " << str1 << endl;
}

void getEmailTypeInfo()
{
    string str2 = "752972182@qq.com";

    int pos = str2.find("@");
    string str3 = str2.substr(pos + 1, 2);
    str2 = str2.substr(0, pos);

    cout << "str2 email user = " << str2 << endl;
    cout << "str3 email type = " << str3 << endl;
}

int main()
{
    subStringDemo();
    getEmailTypeInfo();
    return 0;
}