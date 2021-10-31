//
// Created by FHang on 2021/10/30 16:30
//
#include <iostream>
#include <set>

using namespace std;

class DownSort
{
public:
    bool operator()(int value1, int value2)
    {
        return value1 > value2;
    }
};

void printSet(const set<int> &other)
{
    for (set<int>::const_iterator it = other.begin(); it != other.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void printSet(const set<int, DownSort> &other)
{
    for (set<int>::const_iterator it = other.begin(); it != other.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void demo()
{
    set<int> set1;
    for (int i = 0; i <= 9; ++i)
    {
        set1.insert(i);
    }
    printSet(set1);

    set<int, DownSort> set2;
    for (int i = 0; i <= 9; ++i)
    {
        set2.insert(i);
    }
    printSet(set2);
}

int main()
{
    demo();
    return 0;
}