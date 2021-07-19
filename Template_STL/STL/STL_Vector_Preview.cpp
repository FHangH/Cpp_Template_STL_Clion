//
// Created by FHang on 2021/7/19 14:23
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fPrint(int value)
{
    cout << value << endl;
}

void demo()
{
    // 创建一个vector容器
    vector<int> v;

    // 插入数据
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    // 通过创建迭代器访问容器中的数据
    vector<int>::iterator iBegin = v.begin(); // 起始地迭代器 指向容器中的第一个元素
    vector<int>::iterator iEnd = v.end(); // 指向容器最后一个元素 之后的地址

    // 第一种遍历方式
//    while (iBegin != iEnd)
//    {
//        cout << *iBegin << endl;
//        iBegin++;
//    }

    // 第二种遍历方式
//    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
//    {
//        cout << *i << endl;
//    }

    // 第三种遍历方式
    for_each(v.begin(), v.end(), fPrint);
}

int main()
{
    demo();
    return 0;
}