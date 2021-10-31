//
// Created by FHang on 2021/10/30 16:18
//
#include <iostream>

using namespace std;

void printPair(const pair<string, int> &other)
{
    cout << "Name: " << other.first << " Age: " << other.second << endl;
}

void demo()
{
    pair<string, int> pair1("FF", 22);
    printPair(pair1);

    pair<string, int> pair2 = make_pair("QQ", 20);
    printPair(pair2);
}

int main()
{
    demo();
    return 0;
}