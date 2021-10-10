//
// Created by FHang on 2021/10/10 15:56
//
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v)
{
    for (vector<int>::iterator iterator = v.begin(); iterator != v.end(); ++iterator)
    {
        cout << *iterator << " ";
    }
    cout << endl;
}

void demo1()
{
    // 尾插入
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    printVector(v1);

    // 尾删除
    v1.pop_back();
    printVector(v1);

    // 迭代器指定位置插入
    v1.insert(v1.begin(), 0);
    printVector(v1);

    // 迭代器指定位置插入 指定数量 元素
    v1.insert(v1.end(), 3, 5);
    printVector(v1);

    // 删除迭代器指向位置的元素
    v1.erase(v1.end() - 1);
    printVector(v1);

    // 删除迭代器选择的start到end之间的元素
    v1.erase(v1.begin() + 1, v1.end() - 2);
    printVector(v1);

    // clear
    v1.clear();
    printVector(v1);
}

int main()
{
    demo1();
    return 0;
}