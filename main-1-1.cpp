#include <iostream>
#include <string>
using namespace std;

extern string* create_strings(int num_vals);

int main()
{
    int num_vals[4];
    cout << create_strings(num_vals) << endl;
}