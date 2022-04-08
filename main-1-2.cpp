#include <iostream>
#include "person.h"
using namespace std;

int main()
{
    person p1("Alice",10000);
    person p2("Sam",5000);
    
    
    cout<<"Person1\nName:"<<p1.getName()<<", Salary: "<<p1.getSalary()<<endl;
    cout<<"Person2\nName:"<<p2.getName()<<", Salary: "<<p2.getSalary()<<endl;
    
    p1.setName("Alice");
    cout<<"\nAfter changing name to person1 is:"<<endl;
    cout<<"Person1\nName:"<<p1.getName()<<",Salary:"<<p1.getSalary()<<endl;
    p2.setSalary(4829);
    cout<<"\nAfter changing name to person2 is:"<<endl;
    cout<<"Person2\nName:"<<p2.getName()<<",Salary:"<<p2.getSalary()<<endl;
    return 0;
}