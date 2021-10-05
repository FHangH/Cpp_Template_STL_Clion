//
// Created by FHang on 2021/10/5 16:08
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
    for (int i = 0; i < 10; ++i)
    {
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2 = v1;
    printVector(v2);

    vector<int> v3(v1.begin(), v1.end());
    printVector(v3);

    vector<int> v4(10, 1);
    printVector(v4);
}

int main()
{
    demo();
    return 0;
}