//
// Created by FHang on 2021/10/30 15:25
//
#include <iostream>
#include <set>

using namespace std;

void printSet(const set<int> &st)
{
    for (set<int>::const_iterator it = st.begin(); it != st.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void demo()
{
    set<int> st1;
    for (int i = 0; i <= 9; ++i)
    {
        st1.insert(i);
    }
    printSet(st1);

    // find(key)
    set<int>::const_iterator it = st1.find(3);
    if (it != st1.end())
    {
        cout << "Set1 Find>>" << *it << endl;
    }
    else
    {
        cout << "Set1 Not Find" << endl;
    }

    // count(key)
    set<int> st2;
    for (int i = 0; i <= 9; ++i)
    {
        st2.insert(0);
    }
    printSet(st2);
    cout << "Set2 Count 0>>" << st2.count(0) << endl;
}

int main()
{
    demo();
    return 0;
}