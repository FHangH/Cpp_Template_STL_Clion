//
// Created by FHang on 2021/11/13 15:12
//
#include <iostream>
#include <map>

using namespace std;

void printMap(const map<int, int> &other)
{
    for (map<int, int>::const_iterator it = other.begin(); it != other.end(); ++it)
    {
        cout << "Key: " << it->first << " Value: " << it->second << endl;
    }
    cout << endl;
}

void demo()
{
    map<int, int> map1;
    map1.insert(pair<int, int>(1, 10));
    map1.insert(pair<int, int>(2, 20));
    map1.insert(pair<int, int>(3, 30));

    if (map1.empty())
    {
        cout << "Map1 Is Empty" << endl;
    }
    else
    {
        cout << "Map1 Size " << map1.size() << endl;
    }

    map<int, int> map2;
    map2.insert(pair<int, int>(4, 40));
    map2.insert(pair<int, int>(5, 50));
    map2.insert(pair<int, int>(6, 60));

    map1.swap(map2);

    printMap(map1);
    printMap(map2);
}

int main()
{
    demo();
    return 0;
}