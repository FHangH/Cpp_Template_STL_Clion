//
// Created by FHang on 2021/10/29 14:54
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
    list<int> l1;

    // push_back()
    for (int i = 0; i < 5; ++i)
    {
        l1.push_back(i);
    }
    printList(l1);

    // push_front()
    for (int i = 1; i <5; ++i)
    {
        l1.push_front(1);
    }
    printList(l1);

    // pop_back()
    l1.pop_back();
    printList(l1);

    // pop_front()
    l1.pop_front();
    printList(l1);

    // insert(pos, elem)
    l1.insert(l1.begin(), 0);
    printList(l1);

    // insert(pos, n, elem)
    l1.insert(l1.end(), 3, 5);
    printList(l1);

    // insert(pos, begin, end);
    list<int> l2(3, 9);
    l1.insert(l1.end(), l2.begin(), l2.end());
    printList(l1);

    // erase(pos)
    l1.erase(++l1.begin());
    printList(l1);

    // remove(elem)
    l1.remove(5);
    printList(l1);

    // clear()
    l1.clear();
    l1.push_front(9);
    printList(l1);
}

int main()
{
    demo();
    return 0;
}