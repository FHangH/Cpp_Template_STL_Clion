//
// Created by FHang on 2021/10/10 16:20
//
#include <iostream>
#include <vector>

using namespace std;

void demo()
{
    vector<int> v;

    for (int i = 0; i < 5; ++i)
    {
        v.push_back(i);
    }

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    cout << "Vector Front Elem: " << v.front() << endl;

    cout << "Vector Back Elem: " << v.back() << endl;
}

int main()
{
    demo();
    return 0;
}