//
// Created by FHang on 2021/7/13 14:36
//
#include "fArray.hpp"

int arrayIntCount = 0;
int arrayPersonCount = 0;

// 打印int类型数组
void printIntArray(FArray<int> &fArray)
{
    arrayIntCount++;
    cout << "数组" << arrayIntCount << "：[ ";
    for (int i = 0; i < fArray.getArraySize(); ++i)
    {
        cout << fArray[i] << " ";
    }
    cout << "]" << endl;
}

// 前期测试：创建到堆区，拷贝构造函数，operator= 函数
void test1()
{
    // 测试 初期，创建一个容量5的int类型数组
    // 测试 构造函数和析构函数
    FArray<int> fArray1(5);

    // 测试 拷贝构造函数
    FArray<int> fArray2(fArray1);

    // 测试 operator= 函数
    FArray<int> fArray3(10);
    fArray3 = fArray1;
}

// 后期测试：尾插法，容量，大小
void test2()
{
    // 创建数组 和 容量
    FArray<int> fArray1(10);

    // 用尾插法插入数据
    for (int i = 0; i < 5; ++i)
    {
        fArray1.tail_Insertion(i);
    }
    // 打印数组
    printIntArray(fArray1);

    // 查看数组 容量 大小
    cout << "数组容量：" << fArray1.getArrayCapacity() << endl;
    cout << "数组大小：" << fArray1.getArraySize() << endl;

    // 尾删法 测试
    FArray<int> fArray2(fArray1);
    printIntArray(fArray2);

    fArray2.tail_Deletion();
    cout << "数组容量：" << fArray2.getArrayCapacity() << endl;
    cout << "数组大小：" << fArray2.getArraySize() << endl;
}

// 后期测试 自定义数据类型
class Person
{
public:
    string name;
    int age;

    Person(){};
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

// 打印Person类型数组
void printPersonArray(FArray<Person> &fArray)
{
    arrayPersonCount++;
    cout << "数组" << arrayPersonCount << "：[ ";
    for (int i = 0; i < fArray.getArraySize(); ++i)
    {
        cout << fArray[i].name << " " << fArray[i].age << " - ";
    }
    cout << "]" << endl;
}

void test3()
{
    FArray<Person> fArray(3);
    Person person1("FH", 24);
    Person person2("HH", 22);

    fArray.tail_Insertion(person1);
    fArray.tail_Insertion(person2);

    printPersonArray(fArray);

    cout << "数组容量：" << fArray.getArrayCapacity() << endl;
    cout << "数组大小：" << fArray.getArraySize() << endl;
}

int main()
{
    // test1();
    // test2();
    test3();
    return 0;
}