//
// Created by FHang on 2021/11/13 19:05
//
#include <iostream>
#include <vector>
#include <map>
#include <ctime>

using namespace std;

#define PLAN 0
#define ART 1
#define RD 2

class Staff
{
public:
    string staff_Name;
    int staff_Salary;
};

void printVector(const vector<Staff> &other)
{
    for (vector<Staff>::const_iterator it = other.cbegin(); it != other.cend(); ++it)
    {
        cout << "Name: " << it->staff_Name << " Salary: " << it->staff_Salary << endl;
    }
    cout << endl;
}

void creatStaff(vector<Staff> &v_Staff)
{
    string staffNameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; ++i)
    {
        Staff staff;
        staff.staff_Name = "Staff_";
        staff.staff_Name += staffNameSeed[i];
        staff.staff_Salary = rand() % 10000 + 10000;

        v_Staff.push_back(staff);
    }
}

void setStaffGroup(vector<Staff> &v_Staff, multimap<int, Staff> &map_Depart)
{
    for (vector<Staff>::iterator it = v_Staff.begin(); it != v_Staff.end(); ++it)
    {
        int depart_ID = rand() % 3;
        map_Depart.insert(pair<int, Staff>(depart_ID, *it));
    }
}

void checkStaffByGroup(multimap<int, Staff>::const_iterator &itPos, const multimap<int, Staff> &map_Depart, const int count)
{
    for (int index = 0; itPos != map_Depart.cend() && index < count; ++itPos, ++index)
    {
        cout << "Name: " << itPos->second.staff_Name << " Salary: " << itPos->second.staff_Salary << endl;
    }
    cout << endl;
}

void showStaffInfoByGroup(multimap<int, Staff> &map_Depart)
{
    int countStaff_PLAN = map_Depart.count(PLAN);
    int countStaff_ART = map_Depart.count(ART);
    int countStaff_RD = map_Depart.count(RD);

    multimap<int, Staff>::const_iterator itPos_Plan = map_Depart.find(PLAN);
    multimap<int, Staff>::const_iterator itPos_Art = map_Depart.find(ART);
    multimap<int, Staff>::const_iterator itPos_RD = map_Depart.find(RD);

    cout << "Plan Department>>" << endl;
    checkStaffByGroup(itPos_Plan, map_Depart, countStaff_PLAN);

    cout << "Art Department>>" << endl;
    checkStaffByGroup(itPos_Art, map_Depart, countStaff_ART);

    cout << "R&D Department>>" << endl;
    checkStaffByGroup(itPos_RD, map_Depart, countStaff_RD);
}

int main()
{
    srand((unsigned int)time(NULL));

    vector<Staff> v_Staff;
    creatStaff(v_Staff);
    printVector(v_Staff);

    multimap<int, Staff> map_Depart;
    setStaffGroup(v_Staff, map_Depart);

    showStaffInfoByGroup(map_Depart);

    return 0;
}