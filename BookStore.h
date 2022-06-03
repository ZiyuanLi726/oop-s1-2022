#ifndef BOOKSTORE_H
#define BOOKSTORE_H
#include <iostream>
using namespace std;

class BookStore
{
public:
    BookStore(string n,string a,int b);
    void set_name(n);
    string get_name();
    void set_address(a);
    string get_address();
    void set_numBook(b);
    int get_numBook();
    virtual float get_onlineTax = 0;
    ~Bookstore();

private:
    string name;
    string address;
    int numBook;
};

#endif