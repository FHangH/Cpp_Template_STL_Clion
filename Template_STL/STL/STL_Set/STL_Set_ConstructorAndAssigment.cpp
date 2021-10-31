//
// Created by FHang on 2021/10/30 14:49
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
    // set 只能用 insert插入数据，且不插入重复数据
    // set 会自动排序插入的数据
    st1.insert(1);
    st1.insert(1);
    st1.insert(1);
    st1.insert(4);
    st1.insert(3);
    st1.insert(2);
    printSet(st1);

    // 默认构造
    set<int> st2(st1);
    printSet(st2);

    // 赋值拷贝构造
    set<int> st3 = st1;
    printSet(st3);
}

int main()
{
    demo();
    return 0;
}