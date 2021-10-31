//
// Created by FHang on 2021/10/30 15:00
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
    for (int i = 0; i < 5; ++i)
    {
        st1.insert(i);
    }

    if (st1.empty())
    {
        cout << "Set1 Is Empty" << endl;
    }
    else
    {
        cout << "Set1>>";
        printSet(st1);
        cout << "Set1 Size>>" << st1.size() << endl;
    }
}

void demo2()
{
    set<int> st1;
    for (int i = 0; i < 5; ++i)
    {
        st1.insert(i);
    }

    set<int> st2;
    for (int i = 9; i >= 5 ; --i)
    {
        st2.insert(i);
    }

    cout << "Swap Before>>" << endl;
    cout << "Set1>>";
    printSet(st1);
    cout << "Set2>>";
    printSet(st2);

    cout << "Swap Last>>" << endl;
    st1.swap(st2);
    cout << "Set1>>";
    printSet(st1);
    cout << "Set2>>";
    printSet(st2);
}

int main()
{
    demo();
    demo2();
    return 0;
}