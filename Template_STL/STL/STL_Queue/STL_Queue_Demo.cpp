//
// Created by FHang on 2021/10/20 16:37
//
#include <iostream>
#include <queue>

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

void demo()
{
    queue<Person> q;

    Person p1("QQ", 10);
    Person p2("WW", 20);
    Person p3("EE", 30);
    Person p4("RR", 40);

    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    cout << "Queue Size: " << q.size() << endl;

    while (!q.empty())
    {
        cout << "Front Name: " + q.front().name + " Front Age: " << q.front().age << endl;
        cout << "Back Name: " + q.back().name + " Back Age: " << q.back().age << endl;

        q.pop();
    }

    cout << "Queue Size: " << q.size() << endl;
}

int main()
{
    demo();
    return 0;
}