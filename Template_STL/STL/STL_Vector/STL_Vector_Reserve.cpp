//
// Created by FHang on 2021/10/10 16:54
//
#include <iostream>
#include <vector>

using namespace std;

void demo1()
{
    int count = 0;
    int *p = nullptr;

    vector<int> v;

    for (int i = 0; i < 10000000; ++i)
    {
        v.push_back(i);
        if (p != &v[0])
        {
            p = &v[0];
            ++count;
        }
    }
    cout << "Number Of Extensions: " << count << endl;
}

void demo2()
{
    int count = 0;
    int *p = nullptr;

    vector<int> v;
    v.reserve(10000001);

    for (int i = 0; i < 10000000; ++i)
    {
        v.push_back(i);
        if (p != &v[0])
        {
            p = &v[0];
            ++count;
        }
    }
    cout << "Reserve Number Of Extensions: " << count << endl;
}

int main()
{
    demo1();
    demo2();
    return 0;
}