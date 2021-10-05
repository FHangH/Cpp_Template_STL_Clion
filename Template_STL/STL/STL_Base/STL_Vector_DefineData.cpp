//
// Created by FHang on 2021/7/19 14:49
//
#include <iostream>
#include <vector>
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

void demo1()
{
    cout << "< --demo1-- >" << endl;
    vector<Person> v_P;

    Person p1("fh", 24);
    Person p2("ff", 22);
    Person p3("hh", 20);

    v_P.push_back(p1);
    v_P.push_back(p2);
    v_P.push_back(p3);

    for (vector<Person>::iterator it_P = v_P.begin(); it_P != v_P.end(); ++it_P)
    {
        cout << it_P->name << " " << it_P->age << endl;
    }

    cout << endl;
}

void demo2()
{
    cout << "< --demo2-- >" << endl;
    vector<Person *> v_P;

    Person p1("fh", 24);
    Person p2("ff", 22);
    Person p3("hh", 20);

    v_P.push_back(&p1);
    v_P.push_back(&p2);
    v_P.push_back(&p3);

    for (vector<Person *>::iterator it_P = v_P.begin(); it_P != v_P.end(); ++it_P)
    {
        cout << (*it_P)->name << " " << (*it_P)->age << endl;
    }

    cout << endl;
}

int main()
{
    demo1();
    demo2();
    return 0;
}