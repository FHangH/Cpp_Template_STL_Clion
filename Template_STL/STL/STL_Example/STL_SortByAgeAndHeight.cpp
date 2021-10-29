//
// Created by FHang on 2021/10/29 16:15
//
#include <iostream>
#include <list>

using namespace std;

class Person
{
public:
    string name;
    int age;
    int height;

    Person(const string &name, int age, int height)
    {
        this->name = name;
        this->age = age;
        this->height = height;
    }
};

// Debug
void printPersonList(const list<Person> &other)
{
    for (list<Person>::const_iterator it = other.begin(); it != other.end(); ++it)
    {
        cout << "Name:" << it->name << " Age:" << it->age << " Height:" << it->height << endl;
    }
    cout << endl;
}

bool sortRule(Person &person1, Person &person2)
{
    if (person1.age == person2.age)
    {
        return person1.height < person2.height;
    }
    else
    {
        return person1.age < person2.age;
    }
}

list<Person> createPersonList()
{
    list<Person> l1;

    Person person1("QQ", 10, 160);
    Person person2("WW", 20, 150);
    Person person3("EE", 20, 170);
    Person person4("RR", 70, 175);
    Person person5("TT", 30, 180);

    l1.push_back(person1);
    l1.push_back(person2);
    l1.push_back(person3);
    l1.push_back(person4);
    l1.push_back(person5);

    printPersonList(l1);

    return l1;
}

void upSort(list<Person> &other)
{
    cout << "UpSort>> By Age And Height" << endl;
    other.sort(sortRule);
    printPersonList(other);
}

int main()
{
    list<Person> l1 = createPersonList();
    upSort(l1);

    return 0;
}