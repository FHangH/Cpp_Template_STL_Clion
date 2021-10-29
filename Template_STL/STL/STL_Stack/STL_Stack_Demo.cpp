//
// Created by FHang on 2021/10/20 16:13
//
#include <iostream>
#include <stack>

using namespace std;

void demo()
{
    stack<int> stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);

    while (!stk.empty())
    {
        cout << "Stack Size: " << stk.size() << endl;
        cout << "Stack Top Element: " << stk.top() << endl;
        stk.pop();
    }
    cout << "Stack Size: " << stk.size() << endl;
    cout << "Stack Top Element: " << stk.top() << endl;
}

int main()
{
    demo();
    return 0;
}