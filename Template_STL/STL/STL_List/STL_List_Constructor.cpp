//
// Created by FHang on 2021/10/27 14:37
//
#include <iostream>
#include <list>

using namespace std;

void printList(const list<int> &otherList)
{
    for (list<int>::const_iterator it = otherList.begin(); it != otherList.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void demo()
{
    list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);

    printList(list1);

    // 区间构造
    list<int> list2(list1.begin(), list1.end());
    printList(list2);

    // 拷贝构造
    list<int> list3(list2);
    printList(list3);

    // n 个 elem
    list<int> list4(4, 0);
    printList(list4);
}

int main()
{
    demo();
    return 0;
}