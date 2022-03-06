#include <iostream>
using namespace std;

extern void passorfail(char grade);

int main()
{
    char grade = 'A';
    
    passorfail(grade);
    
    return 0;
}