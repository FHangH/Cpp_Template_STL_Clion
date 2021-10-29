//
// Created by FHang on 2021/10/29 15:54
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

bool upSort(int &list1, int &list2)
{
    return list1 > list2;
}

void demo()
{
    list<int> list1;
    for (int i = 0; i < 10; ++i)
    {
        list1.push_back(i);
    }
    printList(list1);

    // reverse()
    list1.reverse();
    printList(list1);

    // sort() -- 默认从小到大
    list1.sort();
    printList(list1);

    // sort() -- 改为从大到小
    list1.sort(upSort);
    printList(list1);
}

int main()
{
    demo();
    return 0;
}