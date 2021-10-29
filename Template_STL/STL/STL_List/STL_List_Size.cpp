//
// Created by FHang on 2021/10/27 15:06
//
#include <iostream>
#include <list>

using namespace std;

void printList(const list<int> &other)
{
    for (list<int>::const_iterator it = other.begin(); it != other.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void demo()
{
    list<int> list1(5, 1);

    if (list1.empty())
    {
        cout << "List1 Is Empty" << endl;
    }
    else
    {
        cout << "List1 Size: " << list1.size() << endl;
    }

    list1.resize(10, 2);
    printList(list1);

    list1.resize(5);
    printList(list1);
}

int main()
{
    demo();
    return 0;
}