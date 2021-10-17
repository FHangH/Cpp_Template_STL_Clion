//
// Created by FHang on 2021/10/17 15:57
//
#include <iostream>
#include <deque>

using namespace std;

void printDeque(const deque<int> &otherDeque)
{
    for (deque<int>::const_iterator it = otherDeque.begin(); it != otherDeque.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void demo()
{
    deque<int> deque1;
    for (int i = 0; i < 10; ++i)
    {
        deque1.push_back(i);
    }
    printDeque(deque1);

    // at(int index)
    cout << deque1.at(1) << endl;

    // operator[]
    cout << deque1[1] << endl;

    // front()
    cout << deque1.front() << endl;

    // back()
    cout << deque1.back() << endl;
}

int main()
{
    demo();
    return 0;
}