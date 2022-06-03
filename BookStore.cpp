#include "BookStore.h"
#include <iostream>
using namespace std;


BookStore::BookStore(string n,string a,int b)
{
    name = n;
    address = a;
    numBook = b;
}

void BookStore::set_name(n)
{
    name = n;
}

string BookStore::get_name()
{
    return name;
}

void BookStore::set_address(a)
{
    address = a;
}

string BookStore::get_address()
{
    return address;
}

void BookStore::set_numBook(b)
{
    numBook = b;
}

int BookStore::get_numBook()
{
    return numBook;
}

BookStore::~BookStore()
{

}

