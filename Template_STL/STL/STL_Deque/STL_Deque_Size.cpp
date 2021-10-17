//
// Created by FHang on 2021/10/17 15:17
//
#include <iostream>
#include <deque>

using namespace std;

void printDeque(const deque<int> &otherDeque)
{
    for (deque<int>::const_iterator it = otherDeque.begin(); it != otherDeque.end(); ++it)
    {
        cout << *it <<" ";
    }
    cout << endl;
}

void demo()
{
    // 初始化 deque1
    deque<int> deque1;
    for (int i = 0; i < 10; ++i)
    {
        deque1.push_back(i);
    }
    printDeque(deque1);

    // 判断deque1是否为空，不为空，打印出容器大小
    if (deque1.empty())
    {
        cout << "deque1 is empty" << endl;
    }
    else
    {
        cout << "deque1 size: " << deque1.size() << endl;
        // deque 没有容量的概念(capacity)
    }

    // deque1 大小重置
    deque1.resize(12);
    printDeque(deque1);

    deque1.resize(15, 1);
    printDeque(deque1);
}

int main()
{
    demo();
    return 0;
}