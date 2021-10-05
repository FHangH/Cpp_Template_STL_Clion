//
// Created by FHang on 2021/10/5 16:18
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

void demo()
{
    vector<int> v1;
    for (int i = 0; i < 5; ++i)
    {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty())
    {
        cout << "v1 is empty" << endl;
    }
    else
    {
        cout << "v1 not empty" << endl;
        cout << "v1 size = " << v1.size() << endl;
        cout << "v1 capacity = " << v1.capacity() << endl;
    }

    v1.resize(10);
    printVector(v1);

    v1.resize(15, 1);
    printVector(v1);

    v1.resize(2);
    printVector(v1);
}

int main()
{
    demo();
    return 0;
}