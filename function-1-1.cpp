#include <iostream>
#include <string>
using namespace std;

string* create_strings(int num_vals)
{
    string* a = new string[num_vals];
    for(int i = 0; i < num_vals-1; i++)
    {
        a[i] = to_string(i);
    }
    return a[i];
}

void display_array(string *vals, int num_vals)
{
    for(int j = 0; j < num_vals-1; j++)
    {
        
    }
}