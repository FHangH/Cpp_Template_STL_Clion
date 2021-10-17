//
// Created by FHang on 2021/10/14 12:27
//
#include <iostream>
#include <deque>

using namespace std;

// const 修饰 该容器为只可 读
void printDeque(const deque<int> &otherDeque)
{
    for (deque<int>::const_iterator it = otherDeque.begin(); it != otherDeque.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void demo1()
{
    // 无参构造
    deque<int> d1;
    for (int i = 0; i < 10; ++i)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    // 区间构造
    deque<int> d2(d1.begin(), d1.end());
    printDeque(d2);

    // n个元素构造
    deque<int> d3(10, 1);
    printDeque(d3);

    // 拷贝构造
    deque<int> d4(d3);
    printDeque(d4);
}

int main()
{
    demo1();
    return 0;
}