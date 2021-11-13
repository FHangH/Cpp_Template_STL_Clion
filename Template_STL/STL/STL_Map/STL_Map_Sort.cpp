//
// Created by FHang on 2021/11/13 18:08
//
#include <iostream>
#include <map>

using namespace std;

class DownSort
{
public:
    bool operator()(int value1, int value2)
    {
        return value1 > value2;
    }
};

void printMap(const map<int, int, DownSort> &other)
{
    for (map<int, int>::const_iterator it = other.cbegin(); it != other.cend(); ++it)
    {
        cout << "Key: " << it->first << " Value: " << it->second << endl;
    }
    cout << endl;
}

void demo()
{
    map<int, int, DownSort> map1;
    map1.insert(pair<int, int>(1, 10));
    map1.insert(pair<int, int>(2, 20));
    map1.insert(pair<int, int>(3, 30));
    map1.insert(pair<int, int>(4, 40));
    map1.insert(pair<int, int>(5, 50));

    printMap(map1);
}

int main()
{
    demo();
    return 0;
}