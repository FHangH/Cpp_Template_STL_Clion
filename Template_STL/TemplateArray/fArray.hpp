//
// Created by Admin on 2021/7/13.
//

#ifndef TEMPLATE_STL_FARRAY_HPP
#define TEMPLATE_STL_FARRAY_HPP

#include <iostream>
using namespace std;

template <class array_T>
class FArray
{
private:
    array_T *arrayAddress; // 指针指向堆区开辟的数组首地址
    int arrayCapacity; // 数组容量
    int arraySize; // 数组大小

public:
    // 初始化 数组的容量 大小 和 在堆区创建
    FArray(int capacity)
    {
        this->arrayCapacity = capacity;
        this->arraySize = 0;
        this->arrayAddress = new array_T[this->arrayCapacity];

        // cout << "构造函数调用" << endl;
    }
    // 释放堆区的数组
    ~FArray()
    {
        if (this->arrayAddress != nullptr)
        {
            delete[] this->arrayAddress;
            this->arrayAddress = nullptr;

            // cout << "析构函数调用" << endl;
        }
    }

    // 拷贝构造函数，解决浅拷贝问题
    FArray(const FArray &fArray)
    {
        this->arrayCapacity = fArray.arrayCapacity;
        this->arraySize = fArray.arraySize;

        // 这是编译器默认的浅拷贝，在析构函数执行后，因为地址始终不为null，所以会重复释放
        // this->arrayAddress = fArray.arrayAddress;
        // 重新开辟空间，解决浅拷贝问题
        this->arrayAddress = new array_T[this->arrayCapacity];
        // 将 fArray的数据拷贝进新的空间中
        for (int i = 0; i < this->arraySize; ++i)
        {
            this->arrayAddress[i] = fArray.arrayAddress[i];
        }

        // cout << "拷贝函数调用" << endl;
    }

    // operator= 解决浅拷贝问题
    FArray &operator=(const FArray &fArray)
    {
        // 先判断堆区是否存在，存在就先释放
        if (this->arrayAddress != nullptr)
        {
            delete[] this->arrayAddress;
            this->arrayAddress = nullptr;
            this->arrayCapacity = 0;
            this->arraySize = 0;
        }

        // 深拷贝
        this->arrayCapacity = fArray.arrayCapacity;
        this->arraySize = fArray.arraySize;
        this->arrayAddress = new array_T[this->arrayCapacity];

        for (int i = 0; i < this->arraySize; ++i)
        {
            this->arrayAddress[i] = fArray.arrayAddress[i];
        }

        // cout << "operator=函数调用" << endl;
        return *this;
    }

    // 返回数组大小
    int getArraySize()
    {
        return this->arraySize;
    }

    // 返回数组容量
    int getArrayCapacity()
    {
        return this->arrayCapacity;
    }

    // 尾插法
    void tail_Insertion(const array_T &arrayValue)
    {
        // 先判断数组容量是否够
        if (this->arrayCapacity == this->arraySize)
        {
            return;
        }

        this->arrayAddress[this->arraySize] = arrayValue; // 将数据插入到数组的尾部
        this->arraySize++; // 更新数组的大小
    }

    // 尾删法
    void tail_Deletion()
    {
        // 让用户无法访问最后一个元素，逻辑删除
        if (this->arraySize == 0)
        {
            return;
        }

        this->arraySize--;
    }

    // 通过小标访问数组元素 自定义的数据类型，内置的[]不能用，需要重载[]
    array_T &operator[](int fArray_Index)
    {
        return this->arrayAddress[fArray_Index];
    }
};

#endif //TEMPLATE_STL_FARRAY_HPP