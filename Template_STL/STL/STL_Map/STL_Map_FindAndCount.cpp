//
// Created by FHang on 2021/11/13 16:34
//
#include <iostream>
#include <map>

using namespace std;

void printMap(const map<int, int> &other)
{
    for (map<int, int>::const_iterator it = other.cbegin(); it != other.cend(); ++it)
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

    map<int, int>::const_iterator itPos = map1.find(3);

    // map.end() 返回的是迭代器所指位置的 “下一个”迭代器的位置
    if (itPos != map1.cend())
    {
        cout << "Key: " << itPos->first << " Value: " << itPos->second << endl;
        cout << "End Key: " << map1.cend()->first << " End Value: " << map1.cend()->second << endl;
    }
    else
    {
        cout << "Can Find Key" << endl;
    }

    map1.insert(pair<int, int>(3, 90));
    int count = map1.count(3);
    cout << "End Key: " << map1.cend()->first << " End Value: " << map1.cend()->second << endl;
    cout << count << endl;

}

int main()
{
    demo();
    return 0;
}