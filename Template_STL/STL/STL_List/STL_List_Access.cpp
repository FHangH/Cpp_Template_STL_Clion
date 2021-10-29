//
// Created by FHang on 2021/10/29 15:33
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

    for (int i = 0; i < 5; ++i)
    {
        l1.push_back(i);
    }
    printList(l1);

    cout << "l1 first>> " << l1.front() << endl;
    cout << "l1 back>> " << l1.back() << endl;

    // 双向访问
    list<int>::iterator it1 = ++l1.begin();
    list<int>::iterator it2 = --l1.end();
    l1.erase(it1, it2);
    printList(l1);
}

int main()
{
    demo();
    return 0;
}