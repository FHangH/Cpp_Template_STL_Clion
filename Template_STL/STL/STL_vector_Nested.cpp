//
// Created by FHang on 2021/7/19 15:07
//
#include <iostream>
#include <vector>
using namespace std;

void demo()
{
    // 创建大容器
    vector<vector<int>> v_Big;
    // 创建小容器
    vector<int> v_S1;
    vector<int> v_S2;
    vector<int> v_S3;
    vector<int> v_S4;
    // 向小容器中添加数据
    for (int i = 0; i < 4; ++i)
    {
        v_S1.push_back(i + 1);
        v_S2.push_back(i + 2);
        v_S3.push_back(i + 3);
        v_S4.push_back(i + 4);
    }
    // 将小容器插入大容器
    v_Big.push_back(v_S1);
    v_Big.push_back(v_S2);
    v_Big.push_back(v_S3);
    v_Big.push_back(v_S4);
    // 遍历大容器
    for (vector<vector<int>>::iterator it_Big = v_Big.begin(); it_Big != v_Big.end(); ++it_Big)
    {
        // (*it_Big)是小容器 vector<int>
        // 遍历小容器
        for (vector<int>::iterator it_Small = (*it_Big).begin(); it_Small != (*it_Big).end(); ++it_Small)
        {
            cout << *it_Small << " ";
        }
        cout << endl;
    }
}

int main()
{
    demo();
    return 0;
}