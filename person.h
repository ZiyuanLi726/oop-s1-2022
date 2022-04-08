#ifndef PERSON_H
#define PERSON_H

#include <iostream>

#include <string>

using namespace std;

class person
{
    public:
        person(string myname, int Salary);
        void setName(string myName);
        string getName();
        void setSalary(int mySalary);
        int getSalary();
    
    private:
        string name;
        int salary;
};

#endif