#include <iostream>
using namespace std;

extern string lookup_month(int day);
int main()
{
    int day = 9;
    cout << lookup_month(day) << endl;
    
    int invalid = 34;
    cout << lookup_month(invalid) << endl;
    
    return 0;
}