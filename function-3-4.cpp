#include <iostream>
using namespace std;

void passorfail(char grade)
{
    string result = "null";
    switch (grade)
    {
        case 'A':
        result = "pass";
        break;
        
        case 'B':
        result = "pass";
        break;
        
        case 'C':
        result = "pass";
        break;
        
        case 'D':
        result = "fail";
        break;
        
        case 'E':
        result = "fail";
        break;
    }
    
    if (result == "null")
    {
        cout << "nothing" << endl;
    }
    else
    {
        cout << result << endl;
    }
}