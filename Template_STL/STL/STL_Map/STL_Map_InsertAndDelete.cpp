//
// Created by FHang on 2021/11/13 15:31
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
    map1.insert(make_pair(2, 20));
    map1.insert(map<int, int>::value_type(3, 30));

    // 不建议使用该方法插入，但可以通过这个方法利用 key 访问 value
    map1[4] = 40;

    map1.insert(pair<int, int>(5, 50));
    map1.insert(pair<int, int>(6, 60));
    map1.insert(pair<int, int>(7, 70));

    // map[5]在容器中不存在，所以默认直接在容器中添加了一个，默认value为0
    cout << map1[8] << endl;

    printMap(map1);

    map1.erase(map1.begin());
    printMap(map1);

    map1.erase(8);
    printMap(map1);

    map1.erase(++map1.begin(), --map1.end());
    printMap(map1);

    map1.clear();
    printMap(map1);
}

int main()
{
    demo();
    return 0;
}