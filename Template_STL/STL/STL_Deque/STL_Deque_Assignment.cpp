//
// Created by FHang on 2021/10/14 13:13
//
#include <iostream>
#include <deque>

using namespace std;

void printDeque(deque<int> &otherDeque)
{
    for (deque<int>::iterator it = otherDeque.begin(); it != otherDeque.end(); ++it)
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

    // operator=
    deque<int> deque2 = deque1;
    printDeque(deque2);

    // assign(begin, end)
    deque<int> deque3;
    deque3.assign(deque1.begin(), deque1.end());
    printDeque(deque3);

    // assign(n, elem)
    deque<int> deque4;
    deque4.assign(10, 1);
    printDeque(deque4);
}

int main()
{
    demo();
    return 0;
}