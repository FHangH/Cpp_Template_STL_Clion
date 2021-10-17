//
// Created by FHang on 2021/10/17 16:05
//
#include <iostream>
#include <deque>
#include <algorithm>

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
    for (int i = 20; i > 0; i -= 2)
    {
        deque1.push_back(i);
    }
    printDeque(deque1);

    std::sort(deque1.begin(), deque1.end());
    printDeque(deque1);
}

int main()
{
    demo();
    return 0;
}