//
// Created by FHang on 2021/10/17 15:38
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

    // push_back()
    deque1.push_back(1);
    deque1.push_back(2);

    // push_front()
    deque1.push_front(0);
    deque1.push_front(0);
    printDeque(deque1);

    // pop_back()
    deque1.pop_back();

    // pop_front()
    deque1.pop_front();
    printDeque(deque1);

    // insert(pos, elem)
    deque1.insert(deque1.begin(), 0);

    // insert(pos, n, elem)
    deque1.insert(deque1.end(), 2, 2);
    printDeque(deque1);

    // clear()
    deque1.clear();
    printDeque(deque1);

    for (int i = 0; i < 10; ++i)
    {
        deque1.push_back(i);
    }
    printDeque(deque1);

    // erase(begin, end)
    deque1.erase(deque1.begin(), deque1.end() - 7);
    printDeque(deque1);

    // erase(pos)
    deque1.erase(deque1.begin() + 1);
    printDeque(deque1);
}

int main()
{
    demo();
    return 0;
}