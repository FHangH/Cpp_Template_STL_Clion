//
// Created by FHang on 2021/10/31 16:34
//
#include <iostream>
#include <map>

using namespace std;

void printMap(const map<int, string> &other)
{
    for (map<int, string>::const_iterator it = other.begin(); it != other.end(); ++it)
    {
        cout << "ID: " << it->first << " Name: " << it->second << endl;
    }
    cout << endl;
}

void demo()
{
    map<int, string> map1;

    map1.insert(pair<int, string>(1, "QQ"));
    map1.insert(pair<int, string>(4, "WW"));
    map1.insert(pair<int, string>(2, "EE"));
    map1.insert(pair<int, string>(5, "RR"));
    map1.insert(pair<int, string>(3, "TT"));

    printMap(map1);

    // 拷贝构造
    map<int, string> map2(map1);
    printMap(map2);

    // 赋值
    map<int, string> map3 = map1;
    printMap(map3);
}

int main()
{
    demo();
    return 0;
}