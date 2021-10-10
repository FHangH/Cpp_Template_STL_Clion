//
// Created by FHang on 2021/10/10 16:30
//
#include <iostream>
#include <vector>

using namespace std;

void debugVector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void debugVectorInfo(vector<int> &v)
{
    cout << "Vector Capacity: " << v.capacity() << endl;
    cout << "Vector Size: " << v.size() << endl;
}

void demo1()
{
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < 5; ++i)
    {
        v1.push_back(i);
    }

    for (int i = 5; i > 0; --i)
    {
        v2.push_back(i);
    }

    v1.swap(v2);

    debugVector(v1);
    debugVector(v2);
}

void demo2()
{
    vector<int> v3;
    for (int i = 0; i < 1000000; ++i)
    {
        v3.push_back(i);
    }
    debugVectorInfo(v3);

    // 巧用 swap() 收缩容器的容量大小0
    v3.resize(10);
    vector<int>(v3).swap(v3);
    debugVectorInfo(v3);
}

int main()
{
    demo1();
    demo2();
    return 0;
}