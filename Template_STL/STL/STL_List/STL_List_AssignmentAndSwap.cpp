//
// Created by FHang on 2021/10/27 14:49
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

void demo1()
{
    cout << "Demo1 >>" << endl;
    list<int> l1(4, 1);
    printList(l1);

    // operator=
    list<int> l2 = l1;
    printList(l2);

    // assign(begin, end)
    list<int> l3;
    l3.assign(l1.begin(), l1.end());
    printList(l3);

    // assign(n, elem)
    list<int> l4;
    l4.assign(4, 0);
    printList(l4);
}

void demo2()
{
    cout << "Demo2 >>" << endl;
    list<int> list1(4, 0);
    list<int> list2(4, 9);

    cout << "Swap List Before >>" << endl;
    printList(list1);
    printList(list2);

    cout << "Swap List Last >>" << endl;
    list1.swap(list2);
    printList(list1);
    printList(list2);
}

int main()
{
    demo1();
    demo2();
    return 0;
}