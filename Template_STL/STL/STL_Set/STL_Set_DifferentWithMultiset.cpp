//
// Created by FHang on 2021/10/30 15:58
//
#include <iostream>
#include <set>

using namespace std;

void printMultiSet(const multiset<int> &multiset1)
{
    for (multiset<int>::const_iterator it = multiset1.begin(); it != multiset1.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void demo()
{
    set<int> set1;
    pair<set<int>::iterator, bool> pairResult;
    pairResult = set1.insert(1);
    cout << "First>> " << endl;
    if (pairResult.second)
    {
        cout << "Set1 Insert " << "<" << *pairResult.first << ">" << " Succeed" << endl;
    }
    else
    {
        cout << "Set1 Insert " << "<" << *pairResult.first << ">" << " Error" << endl;
    }

    pairResult = set1.insert(1);
    cout << "Second>> " << endl;
    if (pairResult.second)
    {
        cout << "Set1 Insert " << "<" << *pairResult.first << ">" << " Succeed" << endl;
    }
    else
    {
        cout << "Set1 Insert " << "<" << *pairResult.first << ">" << " Error" << endl;
    }
}

void demo2()
{
    multiset<int> multiset1;
    for (int i = 0; i <= 9; ++i)
    {
        multiset1.insert(9);
    }
    printMultiSet(multiset1);
}

int main()
{
    demo();
    demo2();
    return 0;
}