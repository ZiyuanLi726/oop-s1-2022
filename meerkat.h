#include <iostream>
using namespace std;
#ifndef MEERKAT_H
#include <string>
#define MEERK_H

class meerkat
{
    public:
        meerkat();
        void setName(string meerName);
        string getName();
        void setAge(int meerAge);
        int getAge();
    
    private:
        string name;
        int age;
};

#endif