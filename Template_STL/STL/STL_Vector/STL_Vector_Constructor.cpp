//
// Created by FHang on 2021/10/5 15:37
//
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void demo1()
{
    // 默认构造（无参）
    vector<int> v1;

    for (int i = 0; i < 10; ++i)
    {
        v1.push_back(i);
    }
    printVector(v1);

    // 通过 [ ) 构造
    vector<int> v2(v1.begin(), v1.end());
    printVector(v2);

    // n个 elem构造
    vector<int> v3(10, 1);
    printVector(v3);

    // 拷贝构造
    vector<int> v4(v1);
    printVector(v4);
}

int main()
{
    demo1();

    return 0;
}