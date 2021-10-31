//
// Created by FHang on 2021/10/30 16:42
//
#include <iostream>
#include <set>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class DownSort
{
public:
    bool operator()(const Person &p1, const Person &p2)
    {
        return p1.age > p2.age;
    }
};

void printSet(const set<Person, DownSort> &other)
{
    for (set<Person, DownSort>::iterator it = other.begin(); it != other.end(); ++it)
    {
        cout << "Name: " << it->name << " Age: " << it->age << endl;
    }
    cout << endl;
}

void demo()
{
    Person p1("QQ", 10);
    Person p2("WW", 40);
    Person p3("EE", 20);
    Person p4("RR", 30);

    set<Person, DownSort> set1;
    set1.insert(p1);
    set1.insert(p2);
    set1.insert(p3);
    set1.insert(p4);

    printSet(set1);
}

int main()
{
    demo();
    return 0;
}