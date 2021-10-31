//
// Created by FHang on 2021/10/30 15:14
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

    // erase(pos)
    st1.erase(st1.begin());
    printSet(st1);

    // erase(elem)
    st1.erase(9);
    printSet(st1);

    // erase(begin, end);
    st1.erase(++st1.begin(), --st1.end());
    printSet(st1);

    // clear()
    st1.clear();
    st1.insert(0);
    printSet(st1);
}

int main()
{
    demo();
    return 0;
}